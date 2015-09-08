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
//## Attribute Itsep_IRpmGauge
#include "IRpmGauge.h"
//## Return type of getItsep_IThrottle
#include "IThrottle.h"
//## package SampleModel

//## class EngineCls
class EngineCls : public IIgnition {
    ////    Constructors and destructors    ////
    
public :

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
    IRpmGauge* Itsep_IRpmGauge;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EngineCls.h
*********************************************************************/
