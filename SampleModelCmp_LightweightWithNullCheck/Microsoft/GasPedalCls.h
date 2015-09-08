/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: GasPedalCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.h
*********************************************************************/

#ifndef GasPedalCls_H
#define GasPedalCls_H

//## auto_generated
#include <oxf\oxf.h>
//## Attribute ItsIThrottle
#include "IThrottle.h"
//## package SampleModel

//## class GasPedalCls
class GasPedalCls {
public :

    //## Aselsan auto generated for required inteface: 'IThrottle' of port: 'pp'
    class pp_IThrottleCls : public IThrottle {
        ////    Framework operations    ////
        
    public :
    
        // Aselsan: Auto Generated for port connections
        void setItsIThrottle(IThrottle * ifc);
        
        //## Aselsan: Auto generated port relay operation
        void RequestThrottle();
        
        ////    Framework    ////
    
    protected :
    
        // Aselsan: Auto Generated for port connections
        IThrottle* ItsIThrottle;
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    GasPedalCls();
    
    //## auto_generated
    ~GasPedalCls();
    
    // Aselsan: Auto Generated for port connections
    void setItspp_IThrottle(IThrottle * ifc);
    
    ////    Framework operations    ////
    
    ////    Framework    ////

protected :

    // Aselsan: Auto Generated for port connections
    pp_IThrottleCls Itspp_IThrottle;
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.h
*********************************************************************/
