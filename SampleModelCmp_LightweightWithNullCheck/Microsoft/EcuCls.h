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
//## Attribute ItsIRpmGauge
#include "IRpmGauge.h"
//## package SampleModel

//## class EcuCls
class EcuCls : public IThrottleEcu {
public :

    //## Aselsan auto generated for required inteface: 'IRpmGauge' of port: 'ep2'
    class ep2_IRpmGaugeCls : public IRpmGauge {
        ////    Framework operations    ////
        
    public :
    
        // Aselsan: Auto Generated for port connections
        void setItsIRpmGauge(IRpmGauge * ifc);
        
        //## Aselsan: Auto generated port relay operation
        void SetRpm();
        
        ////    Framework    ////
    
    protected :
    
        // Aselsan: Auto Generated for port connections
        IRpmGauge* ItsIRpmGauge;
    };
    
    ////    Constructors and destructors    ////
    
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
    ep2_IRpmGaugeCls Itsep2_IRpmGauge;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EcuCls.h
*********************************************************************/
