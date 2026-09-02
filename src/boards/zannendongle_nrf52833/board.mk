# nRF52833-QDAA (QFN40) with SoftDevice S140
# VDDH shorted to VDD (3.3 V, normal voltage mode, LDO only), external
# 32.768 kHz crystal on P0.00/XL1, P0.01/XL2 and external 32 MHz crystal.
MCU_SUB_VARIANT = nrf52833

# SoftDevice: S140 v7.3.0 (SD_SIZE 0x27000, so the UF2 app starts at
# 0x27000; MBR at 0x0). S140 v6 would be 0x26000.
SD_NAME = s140
SD_VERSION = 7.3.0
