#include "mbed.h"

//ピン
AnalogIn analogInModule(dp9);
//AnalogIn duty(dp10);
//DigitalOut digitalOutModule(dp18);
//PwmOut speaker(dp18);
DigitalOut sp(dp14);

float analogInValue; //入力部品からの入力値を保存
//float analogInDuty; //入力部品からの入力値を保存

Serial pc(USBTX, USBRX);
int sw = 0;

int main()
{
    while (true){
        analogInValue = analogInModule;
        if (analogInValue > 0.02){
            if (sp==1){
           sp=0;
           }else{
           sp=1;
           }
       wait(0.005*analogInValue);
       }
    }
}
