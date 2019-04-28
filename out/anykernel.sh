# AnyKernel2 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() {
kernel.string=Proto8 Kernel by JBolho and nutcasev1.5 @ XDA
do.devicecheck=0
do.modules=0
do.cleanup=1
do.cleanuponabort=1
device.name1=
device.name2=
} # end properties

## AnyKernel methods (DO NOT CHANGE)
# import patching functions/variables - see for reference
. /tmp/anykernel/tools/ak2-core.sh;

ui_print "            CKE9            ";
ui_print "             BY             ";
ui_print "          Hugoclaw          ";
ui_print " I only cherry picked stuff ";
ui_print "     From JBolho's work     ";

# shell variables
block=/dev/block/bootdevice/by-name/kernel;
ramdisk_compression=auto;

# reset for kernel patching
reset_ak;
mv /tmp/anykernel/kernel-Image.gz /tmp/anykernel/Image.gz;


## AnyKernel kernel install

ui_print "CKE9 Kernel is being installed";

split_boot;

flash_boot;

## end install
