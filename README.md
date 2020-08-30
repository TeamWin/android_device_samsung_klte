## TWRP device tree for Galaxy S5 (International Qualcomm, Americas, and Oceanic)

Credits to @jcadduono for the tree used as a base. 

Credits to @IcemanDEV for his fix for aroma installer.

Credits to @me aka @Yilliee for various other edits 😋

Add to `.repo/local_manifests/klte.xml`:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
	<project path="device/samsung/klte" name="android_device_samsung_klte" remote="TeamWin" revision="android-6.0" />
</manifest>
```

Then run `repo sync` to check it out.

Kernel sources are available at: https://github.com/jcadduono/nethunter_kernel_klte/tree/twrp-6.0

