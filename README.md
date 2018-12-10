# stm32_mbed
## 将mbed系统移植到keil中开发
- 适配STM32F103RC，在原子STM32 MINI板测试成功
- 移植STM32F030R8，在NUCLEO-F030R8板测试成功
- 适配STM32F030F4，未成功：由于其FLASH大小为16KB，移植mbed空间太小，在keil中修改其大小为24KB（0x6000）使得编译通过
- 适配STM32F103C8，在STM32F103C8T6最小系统板测试成功
- 适配STM32F103C6，在STM32F103C8T6最小系统板测试成功，proteus上仿真待测试
- 只修改了STM32F103RC的栈顶地址，其他芯片类似

## 各芯片ROM、RAM情况
IC | ROM | RAM
:------:|:------:|:------:|
STM32F103RC | 256K | 48K |
STM32F030R8 | 64K | 8K |
STM32F030F4 | 16K | 4K |
STM32F103C8 | 64K | 20K |
STM32F103C6 | 32K | 10K |
