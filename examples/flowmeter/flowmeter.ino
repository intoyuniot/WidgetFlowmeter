/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
可显示水流速度等类似值

所需器件:
*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetFlowmeter.h>

WidgetFlowmeter flowmeter;

void setup() 
{
// put your setup code here, to run once.
    flowmeter.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
    flowmeter.displaySpeed(2);
    delay(2000);
}
