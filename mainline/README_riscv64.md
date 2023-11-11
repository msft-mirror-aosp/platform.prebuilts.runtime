Unlike other architectures, riscv64 is not supported by mainline yet
(see b/286551985#comment6 for reasons why). Therefore we have to follow a
semi-manual update process described below.

This is not a fully correct process, as the prebuilts are taken from an
arbitrary local build, and only for riscv64. Common architecture-independent
parts of the SDKs such as headers are not updated, as that would affect
architectures other than riscv64. One can only hope they did not diverge too
much from the previous update.

For conscrypt and statsd, we (the ART team) don't have the ownership to commit
the updates in their proper repositories, prebuilts/module_sdk/conscrypt and
prebuilts/module_sdk/StatsD. Therefore as a temporary workaround these prebuilts
are committed in prebuilts/runtime/mainline/local_riscv64. Before the build
starts, they are copied to their proper places by the art/tools/buildbot-*.sh
scripts.

To update:

1. On aosp/main (full manifest):

- Build apexes:
  ```
  $ banchan \
      com.android.runtime \
      com.android.tzdata \
      com.android.os.statsd \
      com.android.conscrypt \
      com.android.i18n \
      riscv64 \
    && DIST_DIR=out/dist/mainline_modules_riscv64 m dist
  ```

- Build implementation libs:
  ```
  $ lunch aosp_riscv64-trunk_staging-userdebug
  $ m dist
  ```

- Build module SDKs:

  First, cherry-pick https://r.android.com/2647900.
  ```
  $ TARGET_BUILD_APPS="\
      com.android.os.statsd \
      com.android.runtime \
      com.android.i18n \
      com.android.conscrypt \
      com.android.tzdata" \
    packages/modules/common/build/mainline_modules_sdks.sh \
      --build-release latest \
      --build-platform-sdks-for-mainline
  ```

2. On master-art branch (reduced manifest):

- Run:
  ```
  $ prebuilts/runtime/mainline/update.py \
      --local-dist-riscv64 <root-of-aosp-tree>/out/dist
  ```

- Manually inspect the updated Android.bp files and revert any sections not
  related to riscv64 (it may be necessary to revert the entire file). Then try
  to build with `lunch riscv64 && art/tools/buildbot-build.sh`, you may find
  that further tweaking is needed. Make sure that the build succeeds.

- Update the commit (use `lunch riscv64 && art/tools/buildbot-build.sh` as a
  validation step in commit message). Be sure to set mast@ as reviewer.
