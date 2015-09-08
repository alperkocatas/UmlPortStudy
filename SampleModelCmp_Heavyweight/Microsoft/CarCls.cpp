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
//#[ ignore
CarCls::cp_C::InBound_C::InBound_C() {
    itsIIgnition = NULL;
}

CarCls::cp_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void CarCls::cp_C::InBound_C::Ignite() {
    
    if (itsIIgnition != NULL) {
        itsIIgnition->Ignite();
    }
    
}

IIgnition* CarCls::cp_C::InBound_C::getItsIIgnition() const {
    return itsIIgnition;
}

void CarCls::cp_C::InBound_C::setItsIIgnition(IIgnition* p_IIgnition) {
    itsIIgnition = p_IIgnition;
}

void CarCls::cp_C::InBound_C::cleanUpRelations() {
    if(itsIIgnition != NULL)
        {
            itsIIgnition = NULL;
        }
}

CarCls::cp_C::OutBound_C::OutBound_C() {
}

CarCls::cp_C::OutBound_C::~OutBound_C() {
}

CarCls::cp_C::cp_C() : _p_(0) {
}

CarCls::cp_C::~cp_C() {
}

IIgnition* CarCls::cp_C::getItsIIgnition() {
    return &InBound;
}

void CarCls::cp_C::setItsIIgnition(IIgnition* p_IIgnition) {
    InBound.setItsIIgnition(p_IIgnition);
}

CarCls::cp_C::InBound_C* CarCls::cp_C::getInBound() const {
    return (CarCls::cp_C::InBound_C*) &InBound;
}

CarCls::cp_C::OutBound_C* CarCls::cp_C::getOutBound() const {
    return (CarCls::cp_C::OutBound_C*) &OutBound;
}
//#]

CarCls::CarCls() {
    initRelations();
}

CarCls::~CarCls() {
}

CarCls::cp_C* CarCls::getCp() const {
    return (CarCls::cp_C*) &cp;
}

CarCls::cp_C* CarCls::get_cp() const {
    return (CarCls::cp_C*) &cp;
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

void CarCls::initRelations() {
    {
        
        get_cp()->setItsIIgnition(Engine.get_ip()->getItsIIgnition());
        
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\CarCls.cpp
*********************************************************************/
