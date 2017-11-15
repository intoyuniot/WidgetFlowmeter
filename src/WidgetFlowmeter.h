#ifndef WIDGET_FLOWMERTER_H_
#define WIDGET_FLOWMERTER_H_

#include "application.h"

class WidgetFlowmeter : public WidgetBaseClass
{
    public:
        WidgetFlowmeter(uint8_t ucItem = 0);
        ~WidgetFlowmeter();
        void begin(void (*UserCallBack)(void) = NULL);
        void displaySpeed(uint8_t ucVal);

    private:
        char pDataSpeedTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
