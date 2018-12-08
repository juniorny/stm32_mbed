# stm32_mbed
## 将mbed系统移植到keil中开发
- 适配STM32F103RC，在原子STM32 MINI板测试成功
- 移植STM32F030R8，在NUCLEO-F030R8板测试成功
- 适配STM32F030F4，未成功：由于其FLASH大小为16KB，移植mbed空间太小，在keil中修改其大小为24KB（0x6000）使得编译通过
