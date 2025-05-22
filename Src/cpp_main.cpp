#include "AppLed.hpp"

int main() {
    AppLed led;  // 自動初始化 GPIO
    led.on();    // 點亮 LED

    while (true) {
        // 永遠亮
    }
}
