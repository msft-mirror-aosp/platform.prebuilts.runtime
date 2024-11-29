Prebuilts of exported flag libraries from platform and other Mainline modules
that the ART Module needs.

To update:

1. Build the ART Module on the full AOSP tree.

    ```
    m com.android.art
    ```

1. Copy the jars from the build intermediates.

    ```
    declare -a locations=(
      "frameworks/base/android.content.pm.flags-aconfig-java-export"
      "frameworks/base/android.os.flags-aconfig-java-export"
    )
    for location in "${locations[@]}"; do
      cp out/soong/.intermediates/$location/android_common_apex31/javac/*.jar \
          prebuilts/runtime/mainline/flags
    done
    ```
