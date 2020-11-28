# Weact STM32F4 board support for Mbed Studio
Mbed program for [Weact MiniF4 Boards](https://github.com/WeActTC/MiniF4-STM32F4x1) (aka blackpill)
This includes [custom target definition](https://os.mbed.com/docs/mbed-studio/current/targets/custom-targets.html) for WeAct `STM32F401CCU6` / `STM32F401CEU6` / `STM32F411CEU6` core boards.
Settings are based on official NUCLEO-F401RE target.

# Build
1. [Import](https://os.mbed.com/docs/mbed-studio/current/create-import/index.html#importing) this program. 
1. Select `WEACT-***` [Target](https://os.mbed.com/docs/mbed-studio/current/building-running/index.html#selecting-a-build-target).
1. [Build](https://os.mbed.com/docs/mbed-studio/current/building-running/index.html).

# Flash
WeAct boards does not have mbed interfaces.
Flash `BUILD/WEACT-MCUNAME/AMRC6/PROGRAMNAME.bin` manually by using ST-LINK, DFU or other method
