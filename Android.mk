ifneq ($(filter klte,$(TARGET_DEVICE)),)
    include $(all-subdir-makefiles)
endif
