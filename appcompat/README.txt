appcompat.sh
============

Given an APK, finds API uses that fall into the blacklist/greylists APIs.

NOTE: appcompat.sh is still under development. It can report
API uses that do not execute at runtime, and reflection uses
that do not exist. It can also miss on reflection uses.

Currently only works on Linux x64.

To run it:
> unzip veridex.zip
> appcompat.sh --dex-file=test.apk
