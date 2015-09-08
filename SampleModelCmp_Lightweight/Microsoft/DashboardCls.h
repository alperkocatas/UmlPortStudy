/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: DashboardCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\DashboardCls.h
*********************************************************************/

#ifndef DashboardCls_H
#define DashboardCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class DashboardCls
#include "IRpmGauge.h"
//## package SampleModel

//## class DashboardCls
class DashboardCls : public IRpmGauge {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DashboardCls();
    
    //## auto_generated
    virtual ~DashboardCls();
    
    ////    Operations    ////
    
    //## operation SetRpm()
    virtual void SetRpm();
    
    // Aselsan: Auto Generated for port connections
    IRpmGauge * getItsDp_IRpmGauge();
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\DashboardCls.h
*********************************************************************/
