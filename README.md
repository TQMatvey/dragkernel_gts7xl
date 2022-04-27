# **DragHunter - a GTS7XL kernel**

## Modified Netfunter kernel for Samsung Galaxy Tab S7+(SM-T975)  

## Features
* all features from https://github.com/b1ad3runn3r/drag-kernel-t975
* Kali Nethunter Patches
* RTL8812/14AU (TESTED)
* Latest qcacld-3.0 drivers 

## W.I.P
* Internal monitor mode (Partly works)
* rtl8188eus

**GPU OC attempt successful to 683 MHz.**

## Used sources and toolchains
Kernel sources - [here](https://opensource.samsung.com/uploadSearch?searchValue=SM-T975)

Used toolchains: 

GCC 4.9 by [@LineageOS](https://github.com/LineageOS) - [here](https://github.com/LineageOS/android_prebuilts_gcc_linux-x86_aarch64_aarch64-linux-android-4.9/)

Clang toolchain by [@kdrag0n](https://github.com/kdrag0n) - [here](https://github.com/kdrag0n/proton-clang/)

## Building
All toolchain are downloaded automatically as submodules, just run build_kernel.sh

### Arch Linux

```
sudo pacman -Syy
sudo pacman -S base-devel git perl openssl ccache bc
git clone --recurse-submodules dragkernel_gts7xl && cd drag-kernel-t975
chmod +x build_kernel.sh && ./build_kernel.sh
```
### Ubuntu
```
sudo apt update
sudo apt install build-essential bc flex bison libncurses5-dev libssl-dev git ccache
git clone --recurse-submodules https://github.com/TQMatvey/dragkernel_gts7xl && cd dragkernel_gts7xl
chmod +x build_kernel.sh && ./build_kernel.sh
```
## Post-building
Kernel gets packed into AnyKernel3 zip automatically. You don't need to do anything else

## Troubleshooting
If your make task fails with "Permission denied", etc. and the failed file is a shell-script, use ```chmod +x script.sh```

Credits:
* https://github.com/b1ad3runn3r, for DragKernel 
* https://github.com/ianmacd, for his TWRP-compatible config
* https://github.com/freeza-inc,
* https://github.com/engstk,
* https://github.com/Jimbo77,
* https://github.com/flar2 for their patches
* https://github.com/osm0sis for his AnyKernel3
* https://github.com/andip71 for Boeffla WL Blocker
* https://github.com/tanish2k09 for K-Lapse livedisplay module
* https://github.com/kdrag0n for proton-clang
* https://github.com/LineageOS for gcc toolchain nested on github
