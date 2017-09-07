#!/bin/bash
#
#	Initialisiert die Eclipse CPP Umgebung 
#

for file in `find . -mindepth 2 -maxdepth 2 -type d -print | grep -v metadata | grep -v .git | grep -v lib | grep -v vagrant | grep -v images`
do 
	cd $file 
	rm -rf .pio* .hg
	rm -f mbed.bld EthernetInterface.lib mbed-rtos.lib 
	pio init --ide eclipse --board frdm_k64f
	rm -rf .settings/org.eclipse.cdt.core.prefs
	cd -
	
done
