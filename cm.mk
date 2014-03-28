# Release name
PRODUCT_RELEASE_NAME := klte

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/samsung/klte/device.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := klte
PRODUCT_NAME := cm_klte
PRODUCT_BRAND := samsung
PRODUCT_MODEL := klte
PRODUCT_MANUFACTURER := samsung
