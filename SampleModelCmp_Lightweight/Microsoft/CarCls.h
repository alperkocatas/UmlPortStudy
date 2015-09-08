/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: CarCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\CarCls.h
*********************************************************************/

#ifndef CarCls_H
#define CarCls_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance Dashboard
#include "DashboardCls.h"
//## classInstance Engine
#include "EngineCls.h"
//## classInstance GasPedal
#include "GasPedalCls.h"
//## Return type of getItscp_IIgnition
#include "IIgnition.h"
//## package SampleModel

//## class CarCls
class CarCls {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CarCls();
    
    //## auto_generated
    ~CarCls();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DashboardCls* getDashboard() const;
    
    //## auto_generated
    EngineCls* getEngine() const;
    
    //## auto_generated
    GasPedalCls* getGasPedal() const;
    
    // Aselsan: Auto Generated for port connections
    IIgnition * getItscp_IIgnition();
    
    ////    Relations and components    ////

protected :

    DashboardCls Dashboard;		//## classInstance Dashboard
    
    EngineCls Engine;		//## classInstance Engine
    
    GasPedalCls GasPedal;		//## classInstance GasPedal
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\CarCls.h
*********************************************************************/
