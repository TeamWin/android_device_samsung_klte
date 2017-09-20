/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "G900A")) {
		/* klteatt */
		property_set("ro.product.model", "SM-G900A");
		property_set("ro.product.name", "klteuc");
	} else if (strstr(bootloader, "G900W8")) {
		/* kltecan */
		property_set("ro.product.name", "kltevl");
		property_set("ro.product.model", "SM-G900W8");
	} else if (strstr(bootloader, "G900P")) {
		/* kltespr */
		property_set("ro.product.model", "SM-G900P");
		property_set("ro.product.name", "kltespr");
	} else if (strstr(bootloader, "G900T")) {
		/* kltetmo */
		property_set("ro.product.model", "SM-G900T");
		property_set("ro.product.name", "kltetmo");
	} else if (strstr(bootloader, "G900R4")) {
		/* klteusc */
		property_set("ro.product.model", "SM-G900R4");
		property_set("ro.product.name", "klteusc");
	} else if (strstr(bootloader, "G900R6")) {
		/* kltelra */
		property_set("ro.product.model", "SM-G900R6");
		property_set("ro.product.name", "kltelra");
	} else if (strstr(bootloader, "G900R7")) {
		/* klteacg */
		property_set("ro.product.model", "SM-G900R7");
		property_set("ro.product.name", "klteacg");
	} else if (strstr(bootloader, "G900V")) {
		/* kltevzw */
		property_set("ro.product.model", "SM-G900V");
		property_set("ro.product.name", "kltevzw");
	} else if (strstr(bootloader, "G900M")) {
		/* klteub */
		property_set("ro.product.model", "SM-G900M");
		property_set("ro.product.name", "klteub");
	} else if (strstr(bootloader, "G900I")) {
		/* kltedv */
		property_set("ro.product.model", "SM-G900I");
		property_set("ro.product.name", "kltedv");
	} else if (strstr(bootloader, "G900K")) {
		/* kltektt */
		property_set("ro.product.model", "SM-G900K");
		property_set("ro.product.name", "kltektt");
	} else if (strstr(bootloader, "G900L")) {
		/* kltelgt */
		property_set("ro.product.model", "SM-G900L");
		property_set("ro.product.name", "kltelgt");
	} else if (strstr(bootloader, "G900S")) {
		/* klteskt */
		property_set("ro.product.model", "SM-G900S");
		property_set("ro.product.name", "klteskt");
	} else if (strstr(bootloader, "G9008V")) {
		/* kltezm */
		property_set("ro.product.model", "SM-G9008V");
		property_set("ro.product.name", "kltezm");
	} else if (strstr(bootloader, "G9006V")) {
		/* kltezn */
		property_set("ro.product.model", "SM-G9006V");
		property_set("ro.product.name", "kltezn");
	} else if (strstr(bootloader, "G9006W")) {
		/* klteduoszn */
		property_set("ro.product.model", "SM-G9006W");
		property_set("ro.product.name", "klteduoszn");
	} else if (strstr(bootloader, "G9008W")) {
		/* klteduoszm */
		property_set("ro.product.model", "SM-G9008W");
		property_set("ro.product.name", "klteduoszm");
	} else if (strstr(bootloader, "G9009W")) {
		/* klteduosctc */
		property_set("ro.product.model", "SM-G9009W");
		property_set("ro.product.name", "klteduosctc");
	} else if (strstr(bootloader, "SC04F")) {
		/* kltedcm */
		property_set("ro.product.model", "SC-04F");
		property_set("ro.product.name", "kltedcm");
	} else if (strstr(bootloader, "SCL23")) {
		/* kltekdi */
		property_set("ro.product.model", "SCL23");
		property_set("ro.product.name", "kltekdi");
	} else {
		/* all other variants (including duos) become kltexx */
		property_set("ro.product.model", "SM-G900F");
		property_set("ro.product.name", "kltexx");
	}
	property_set("ro.product.device", "klte");
}
