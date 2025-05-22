#pragma once
#include "stm32g474xx.h"

class AppLed {
public:
    AppLed();  // 初始化 GPIO
    void on();
    void off();
};
