#!/bin/bash
make
modprobe usbserial
insmod ch341.ko
