set(MCU_VARIANT nrf52833)

# SoftDevice: S140 v7.3.0 (SD_SIZE 0x27000, so the UF2 app starts at
# 0x27000; MBR at 0x0). S140 v6 would be 0x26000.
set(SD_NAME s140)
set(SD_VERSION 7.3.0)
