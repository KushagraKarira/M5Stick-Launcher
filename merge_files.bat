esptool --chip esp32s3 merge_bin --output Launcher/Launcher_2.0_Cardputer.bin 0x0 support_files/bootloader_CP.bin 0x8000 .pio/build/m5stack-cardputer/partitions.bin 0x10000 .pio/build/m5stack-cardputer/firmware.bin
esptool --chip esp32 merge_bin --output Launcher/Launcher_2.0_cplus2.bin 0x1000 support_files/bootloader_8Mb.bin 0x8000 .pio/build/m5stack-cplus2/partitions.bin 0x10000 .pio/build/m5stack-cplus2/firmware.bin
esptool --chip esp32 merge_bin --output Launcher/Launcher_2.0_cplus1_1.bin 0x1000 support_files/bootloader_4Mb.bin 0x8000 .pio/build/m5stack-cplus1_1/partitions.bin 0x10000 .pio/build/m5stack-cplus1_1/firmware.bin
esptool --chip esp32 merge_bin --output Launcher/Launcher_2.0_C.bin 0x1000 support_files/bootloader_4Mb.bin 0x8000 .pio/build/m5stack-c/partitions.bin 0x10000 .pio/build/m5stack-c/firmware.bin
esptool --chip esp32 merge_bin --output Launcher/Launcher_2.0_core2.bin 0x1000 support_files/bootloader_core16Mb.bin 0x8000 .pio/build/m5stack-core2/partitions.bin 0x10000 .pio/build/m5stack-core2/firmware.bin
esptool --chip esp32 merge_bin --output Launcher/Launcher_2.0_core_16Mb.bin 0x1000 support_files/bootloader_core16Mb.bin 0x8000 .pio/build/m5stack-core/partitions.bin 0x10000 .pio/build/m5stack-core/firmware.bin