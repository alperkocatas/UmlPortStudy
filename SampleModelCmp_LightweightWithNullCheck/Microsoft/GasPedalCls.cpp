/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: GasPedalCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.cpp
*********************************************************************/

//## auto_generated
#include "GasPedalCls.h"
//## package SampleModel

//## class GasPedalCls
void GasPedalCls::pp_IThrottleCls::setItsIThrottle(IThrottle * ifc) {
    // Generated for setting associaton ItsIThrottle
    ItsIThrottle = ifc;
    
}

void GasPedalCls::pp_IThrottleCls::RequestThrottle() {
    if (ItsIThrottle != NULL)
    {
        ItsIThrottle->RequestThrottle();
    }
    
}

GasPedalCls::GasPedalCls() {
}

GasPedalCls::~GasPedalCls() {
}

void GasPedalCls::setItspp_IThrottle(IThrottle * ifc) {
    // Generated for required interface IThrottle of port pp
    Itspp_IThrottle.setItsIThrottle(ifc);
    
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.cpp
*********************************************************************/
