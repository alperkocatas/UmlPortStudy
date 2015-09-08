/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: CarCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\CarCls.cpp
*********************************************************************/

//## auto_generated
#include "CarCls.h"
//## package SampleModel

//## class CarCls
CarCls::CarCls() {
}

CarCls::~CarCls() {
}

DashboardCls* CarCls::getDashboard() const {
    return (DashboardCls*) &Dashboard;
}

EngineCls* CarCls::getEngine() const {
    return (EngineCls*) &Engine;
}

GasPedalCls* CarCls::getGasPedal() const {
    return (GasPedalCls*) &GasPedal;
}

IIgnition * CarCls::getItscp_IIgnition() {
    return Engine.getItsip_IIgnition();
    
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\CarCls.cpp
*********************************************************************/
