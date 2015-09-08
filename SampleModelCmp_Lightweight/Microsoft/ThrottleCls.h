/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: ThrottleCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.h
*********************************************************************/

#ifndef ThrottleCls_H
#define ThrottleCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class ThrottleCls
#include "IThrottle.h"
//## Attribute Itstp1_IThrottleEcu
#include "IThrottleEcu.h"
//## package SampleModel

//## class ThrottleCls
class ThrottleCls : public IThrottle {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ThrottleCls();
    
    //## auto_generated
    virtual ~ThrottleCls();
    
    ////    Operations    ////
    
    //## operation RequestThrottle()
    virtual void RequestThrottle();
    
    // Aselsan: Auto Generated for port connections
    void setItstp1_IThrottleEcu(IThrottleEcu * ifc);
    
    // Aselsan: Auto Generated for port connections
    IThrottle * getItstp2_IThrottle();
    
    ////    Framework operations    ////
    
    ////    Framework    ////

protected :

    // Aselsan: Auto Generated for port connections
    IThrottleEcu* Itstp1_IThrottleEcu;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.h
*********************************************************************/
