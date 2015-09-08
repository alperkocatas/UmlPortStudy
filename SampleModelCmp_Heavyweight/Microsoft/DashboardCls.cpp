/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: DashboardCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\DashboardCls.cpp
*********************************************************************/

//## auto_generated
#include "DashboardCls.h"
//## package SampleModel

//## class DashboardCls
//#[ ignore
DashboardCls::Dp_C::InBound_C::InBound_C() {
    itsIRpmGauge = NULL;
    port = NULL;
}

DashboardCls::Dp_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void DashboardCls::Dp_C::InBound_C::SetRpm() {
    
    if (itsIRpmGauge != NULL) {
        itsIRpmGauge->SetRpm();
    }
    
}

IRpmGauge* DashboardCls::Dp_C::InBound_C::getItsIRpmGauge() const {
    return itsIRpmGauge;
}

void DashboardCls::Dp_C::InBound_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    itsIRpmGauge = p_IRpmGauge;
}

DashboardCls::Dp_C* DashboardCls::Dp_C::InBound_C::getPort() const {
    return port;
}

void DashboardCls::Dp_C::InBound_C::setPort(DashboardCls::Dp_C* p_Dp_C) {
    _setPort(p_Dp_C);
}

void DashboardCls::Dp_C::InBound_C::cleanUpRelations() {
    if(itsIRpmGauge != NULL)
        {
            itsIRpmGauge = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void DashboardCls::Dp_C::InBound_C::__setPort(DashboardCls::Dp_C* p_Dp_C) {
    port = p_Dp_C;
}

void DashboardCls::Dp_C::InBound_C::_setPort(DashboardCls::Dp_C* p_Dp_C) {
    __setPort(p_Dp_C);
}

void DashboardCls::Dp_C::InBound_C::_clearPort() {
    port = NULL;
}

DashboardCls::Dp_C::OutBound_C::OutBound_C() {
}

DashboardCls::Dp_C::OutBound_C::~OutBound_C() {
}

DashboardCls::Dp_C::Dp_C() : _p_(0) {
    initRelations();
}

DashboardCls::Dp_C::~Dp_C() {
}

void DashboardCls::Dp_C::connectDashboardCls(DashboardCls* part) {
    InBound.setItsIRpmGauge(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

IRpmGauge* DashboardCls::Dp_C::getItsIRpmGauge() {
    return &InBound;
}

void DashboardCls::Dp_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    InBound.setItsIRpmGauge(p_IRpmGauge);
}

DashboardCls::Dp_C::InBound_C* DashboardCls::Dp_C::getInBound() const {
    return (DashboardCls::Dp_C::InBound_C*) &InBound;
}

DashboardCls::Dp_C::OutBound_C* DashboardCls::Dp_C::getOutBound() const {
    return (DashboardCls::Dp_C::OutBound_C*) &OutBound;
}

void DashboardCls::Dp_C::initRelations() {
    InBound._setPort(this);
}
//#]

DashboardCls::DashboardCls() {
    initRelations();
}

DashboardCls::~DashboardCls() {
}

void DashboardCls::SetRpm() {
    //#[ operation SetRpm()
    //#]
}

DashboardCls::Dp_C* DashboardCls::getDp() const {
    return (DashboardCls::Dp_C*) &Dp;
}

DashboardCls::Dp_C* DashboardCls::get_Dp() const {
    return (DashboardCls::Dp_C*) &Dp;
}

void DashboardCls::initRelations() {
    if (get_Dp() != NULL) {
        get_Dp()->connectDashboardCls(this);
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\DashboardCls.cpp
*********************************************************************/
