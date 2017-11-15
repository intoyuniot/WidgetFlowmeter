#include "WidgetFlowmeter.h"


WidgetFlowmeter::WidgetFlowmeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataSpeedTopic,0,sizeof(pDataSpeedTopic));
    sprintf(pDataSpeedTopic,"channel/flowmeter_%d/data/speed",_Item);
}

WidgetFlowmeter::~WidgetFlowmeter()
{

}

void WidgetFlowmeter::begin(void (*UserCallBack)(void))
{
}


void WidgetFlowmeter::displaySpeed(uint8_t ucVal)
{
    IntoRobot.publish(pDataSpeedTopic,ucVal);
}


void WidgetFlowmeter::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

