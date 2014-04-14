LOCAL_PATH := $(call my-dir)

DTBTOOL := device/samsung/klte/mkbootimg_dtb
KERNEL := device/samsung/klte/kernel
DTB := device/samsung/klte/dtb

INSTALLED_RECOVERYIMAGE_TARGET := $(PRODUCT_OUT)/recovery.img
$(INSTALLED_RECOVERYIMAGE_TARGET): $(MKBOOTIMG) \
	$(recovery_ramdisk) \
	$(recovery_kernel)
	@echo ----- Making recovery image ------
	$(hide) mkbootimg --kernel $(PRODUCT_OUT)/kernel --ramdisk $(PRODUCT_OUT)/ramdisk-recovery.img --cmdline "$(BOARD_KERNEL_CMDLINE)" --base $(BOARD_KERNEL_BASE) --pagesize $(BOARD_KERNEL_PAGESIZE) $(BOARD_MKBOOTIMG_ARGS) -o $(INSTALLED_RECOVERYIMAGE_TARGET)
	@echo ----- Made recovery image -------- $@
	$(hide) $(DTBTOOL) --kernel $(KERNEL) --ramdisk $(PRODUCT_OUT)/ramdisk-recovery.img --cmdline "console=null androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x3F" --base 0x00000000 --offset 0x02000000 --dt $(DTB) --pagesize 2048 --tags-addr 0x01e00000 -o $(PRODUCT_OUT)/recovery.img
	@echo ----- Added DTB ------------------ $@
