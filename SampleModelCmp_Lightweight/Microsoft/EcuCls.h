/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EcuCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EcuCls.h
*********************************************************************/

#ifndef EcuCls_H
#define EcuCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class EcuCls
#include "IThrottleEcu.h"
//## Attribute Itsep2_IRpmGauge
#include "IRpmGauge.h"
//## package SampleModel

//## class EcuCls
class EcuCls : public IThrottleEcu {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EcuCls();
    
    //## auto_generated
    virtual ~EcuCls();
    
    ////    Operations    ////
    
    //## operation SetThrottle()
    virtual void SetThrottle();
    
    // Aselsan: Auto Generated for port connections
    IThrottleEcu * getItsep1_IThrottleEcu();
    
    // Aselsan: Auto Generated for port connections
    void setItsep2_IRpmGauge(IRpmGauge * ifc);
    
    ////    Framework operations    ////
    
    ////    Framework    ////

protected :

    // Aselsan: Auto Generated for port connections
    IRpmGauge* Itsep2_IRpmGauge;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EcuCls.h
*********************************************************************/
