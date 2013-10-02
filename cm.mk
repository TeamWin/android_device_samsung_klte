# Release name
PRODUCT_RELEASE_NAME := hltetmo

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/samsung/hltetmo/device.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := hltetmo
PRODUCT_NAME := cm_hltetmo
PRODUCT_BRAND := samsung
PRODUCT_MODEL := hltetmo
PRODUCT_MANUFACTURER := samsung
