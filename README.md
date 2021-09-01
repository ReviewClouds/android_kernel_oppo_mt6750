# Hints
For users of F1S and F1 Plus, if you encounter problems such as no signal or sensor failure.
Please adjust some arguments about modem and sensors at defconfig. \
The defconfigs of F1S(15331) and F1Plus(15311) were actually missing, but we can use configs of their China Edition.



# Version
This branch is for "kernel-3.10".


# Chart
| Codename | Device |
| :-: | :-: |
| oppo6750_15127 | A37M/T/TM |
| oppo6750_15131 | A59M/S F1S |
| oppo6750_16021 | A39 |
| oppo6755_15111 | R9M/TM/KM F1Plus|


# Build (example)
```bash
$ apt install -yq bc gcc lib32z1
$ git clone https://android.googlesource.com/platform/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9 -b android-6.0.1_r32 --depth=1
$ export Codename=(codename of your device)
$ export ARCH=arm64
$ export CROSS_COMPILE=$(pwd)/aarch64-linux-android-4.9/bin/aarch64-linux-android-
$ cd android_kernel_oppo_mt6750
$ make ${Codename}_debug_defconfig
$ make -j$(nproc --all) 2>&1 | tee build.log
```
There are also many optional build arguments in the "Makefile".
Such as the "NET_BUILD_TYPE" and etc.


# Output
Kernel: `arch/arm64/boot/Image.gz-dtb` 

Module(Optional): the "hypnus" module
