/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EngineCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EngineCls.h
*********************************************************************/

#ifndef EngineCls_H
#define EngineCls_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance Ecu
#include "EcuCls.h"
//## class EngineCls
#include "IIgnition.h"
//## classInstance Throttle
#include "ThrottleCls.h"
//## Attribute ItsIRpmGauge
#include "IRpmGauge.h"
//## Return type of getItsep_IThrottle
#include "IThrottle.h"
//## package SampleModel

//## class EngineCls
class EngineCls : public IIgnition {
public :

    //## Aselsan auto generated for required inteface: 'IRpmGauge' of port: 'ep'
    class ep_IRpmGaugeCls : public IRpmGauge {
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
    EngineCls();
    
    //## auto_generated
    virtual ~EngineCls();
    
    ////    Operations    ////
    
    //## operation Ignite()
    virtual void Ignite();
    
    ////    Additional operations    ////
    
    //## auto_generated
    EcuCls* getEcu() const;
    
    //## auto_generated
    ThrottleCls* getThrottle() const;
    
    // Aselsan: Auto Generated for port connections
    void setItsep_IRpmGauge(IRpmGauge * ifc);
    
    // Aselsan: Auto Generated for port connections
    IIgnition * getItsip_IIgnition();
    
    // Aselsan: Auto Generated for port connections
    IThrottle * getItsep_IThrottle();
    
    // Aselsan: Auto Generated for port connections
    void initRelations();
    
    ////    Relations and components    ////

protected :

    EcuCls Ecu;		//## classInstance Ecu
    
    ThrottleCls Throttle;		//## classInstance Throttle
    
    ////    Framework operations    ////
    
    ////    Framework    ////
    
    // Aselsan: Auto Generated for port connections
    ep_IRpmGaugeCls Itsep_IRpmGauge;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EngineCls.h
*********************************************************************/
