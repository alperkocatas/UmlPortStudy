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
//## Attribute ItsIThrottleEcu
#include "IThrottleEcu.h"
//## package SampleModel

//## class ThrottleCls
class ThrottleCls : public IThrottle {
public :

    //## Aselsan auto generated for required inteface: 'IThrottleEcu' of port: 'tp1'
    class tp1_IThrottleEcuCls : public IThrottleEcu {
        ////    Framework operations    ////
        
    public :
    
        // Aselsan: Auto Generated for port connections
        void setItsIThrottleEcu(IThrottleEcu * ifc);
        
        //## Aselsan: Auto generated port relay operation
        void SetThrottle();
        
        ////    Framework    ////
    
    protected :
    
        // Aselsan: Auto Generated for port connections
        IThrottleEcu* ItsIThrottleEcu;
    };
    
    ////    Constructors and destructors    ////
    
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
    tp1_IThrottleEcuCls Itstp1_IThrottleEcu;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.h
*********************************************************************/
