$(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)

# The gps config appropriate for this device
$(call inherit-product, device/common/gps/gps_us_supl.mk)

$(call inherit-product-if-exists, vendor/samsung/klte/klte-vendor.mk)

DEVICE_PACKAGE_OVERLAYS += device/samsung/klte/overlay

LOCAL_PATH := device/samsung/klte
ifeq ($(TARGET_PREBUILT_KERNEL),)
	LOCAL_KERNEL := $(LOCAL_PATH)/kernel
else
	LOCAL_KERNEL := $(TARGET_PREBUILT_KERNEL)
endif

PRODUCT_COPY_FILES += \
    $(LOCAL_KERNEL):kernel

PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/fstab.qcom:recovery/root/fstab.qcom

PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/recovery/libkeyutils.so:recovery/root/sbin/libkeyutils.so \
    $(LOCAL_PATH)/recovery/libsec_ecryptfs.so:recovery/root/sbin/libsec_ecryptfs.so \
    $(LOCAL_PATH)/recovery/libsec_km.so:recovery/root/sbin/libsec_km.so \
	$(LOCAL_PATH)/recovery/init.recovery.qcom.rc:recovery/root/init.recovery.qcom.rc \
	$(LOCAL_PATH)/selinux/file_contexts:recovery/root/prebuilt_file_contexts

$(call inherit-product, build/target/product/full.mk)

PRODUCT_NAME := samsung_klte
PRODUCT_BRAND := Samsung
