/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EcuCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EcuCls.cpp
*********************************************************************/

//## auto_generated
#include "EcuCls.h"
//## package SampleModel

//## class EcuCls
void EcuCls::ep2_IRpmGaugeCls::setItsIRpmGauge(IRpmGauge * ifc) {
    // Generated for setting associaton ItsIRpmGauge
    ItsIRpmGauge = ifc;
    
}

void EcuCls::ep2_IRpmGaugeCls::SetRpm() {
    if (ItsIRpmGauge != NULL)
    {
        ItsIRpmGauge->SetRpm();
    }
    
}

EcuCls::EcuCls() {
}

EcuCls::~EcuCls() {
}

void EcuCls::SetThrottle() {
    //#[ operation SetThrottle()
    //#]
}

IThrottleEcu * EcuCls::getItsep1_IThrottleEcu() {
    return this;
    
}

void EcuCls::setItsep2_IRpmGauge(IRpmGauge * ifc) {
    // Generated for required interface IRpmGauge of port ep2
    Itsep2_IRpmGauge.setItsIRpmGauge(ifc);
    
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EcuCls.cpp
*********************************************************************/
