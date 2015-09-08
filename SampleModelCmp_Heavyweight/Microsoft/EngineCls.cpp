/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EngineCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EngineCls.cpp
*********************************************************************/

//## auto_generated
#include "EngineCls.h"
//## package SampleModel

//## class EngineCls
//#[ ignore
EngineCls::ep_C::InBound_C::InBound_C() {
    itsIThrottle = NULL;
}

EngineCls::ep_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void EngineCls::ep_C::InBound_C::RequestThrottle() {
    
    if (itsIThrottle != NULL) {
        itsIThrottle->RequestThrottle();
    }
    
}

IThrottle* EngineCls::ep_C::InBound_C::getItsIThrottle() const {
    return itsIThrottle;
}

void EngineCls::ep_C::InBound_C::setItsIThrottle(IThrottle* p_IThrottle) {
    itsIThrottle = p_IThrottle;
}

void EngineCls::ep_C::InBound_C::cleanUpRelations() {
    if(itsIThrottle != NULL)
        {
            itsIThrottle = NULL;
        }
}

EngineCls::ep_C::OutBound_C::OutBound_C() {
    itsIRpmGauge = NULL;
}

EngineCls::ep_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

void EngineCls::ep_C::OutBound_C::SetRpm() {
    
    if (itsIRpmGauge != NULL) {
        itsIRpmGauge->SetRpm();
    }
    
}

IRpmGauge* EngineCls::ep_C::OutBound_C::getItsIRpmGauge() const {
    return itsIRpmGauge;
}

void EngineCls::ep_C::OutBound_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    itsIRpmGauge = p_IRpmGauge;
}

void EngineCls::ep_C::OutBound_C::cleanUpRelations() {
    if(itsIRpmGauge != NULL)
        {
            itsIRpmGauge = NULL;
        }
}

EngineCls::ep_C::ep_C() : _p_(0) {
}

EngineCls::ep_C::~ep_C() {
}

IRpmGauge* EngineCls::ep_C::getItsIRpmGauge() {
    return &OutBound;
}

IThrottle* EngineCls::ep_C::getItsIThrottle() {
    return &InBound;
}

void EngineCls::ep_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    OutBound.setItsIRpmGauge(p_IRpmGauge);
}

void EngineCls::ep_C::setItsIThrottle(IThrottle* p_IThrottle) {
    InBound.setItsIThrottle(p_IThrottle);
}

EngineCls::ep_C::InBound_C* EngineCls::ep_C::getInBound() const {
    return (EngineCls::ep_C::InBound_C*) &InBound;
}

EngineCls::ep_C::OutBound_C* EngineCls::ep_C::getOutBound() const {
    return (EngineCls::ep_C::OutBound_C*) &OutBound;
}

EngineCls::ip_C::InBound_C::InBound_C() {
    itsIIgnition = NULL;
    port = NULL;
}

EngineCls::ip_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void EngineCls::ip_C::InBound_C::Ignite() {
    
    if (itsIIgnition != NULL) {
        itsIIgnition->Ignite();
    }
    
}

IIgnition* EngineCls::ip_C::InBound_C::getItsIIgnition() const {
    return itsIIgnition;
}

void EngineCls::ip_C::InBound_C::setItsIIgnition(IIgnition* p_IIgnition) {
    itsIIgnition = p_IIgnition;
}

EngineCls::ip_C* EngineCls::ip_C::InBound_C::getPort() const {
    return port;
}

void EngineCls::ip_C::InBound_C::setPort(EngineCls::ip_C* p_ip_C) {
    _setPort(p_ip_C);
}

void EngineCls::ip_C::InBound_C::cleanUpRelations() {
    if(itsIIgnition != NULL)
        {
            itsIIgnition = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void EngineCls::ip_C::InBound_C::__setPort(EngineCls::ip_C* p_ip_C) {
    port = p_ip_C;
}

void EngineCls::ip_C::InBound_C::_setPort(EngineCls::ip_C* p_ip_C) {
    __setPort(p_ip_C);
}

void EngineCls::ip_C::InBound_C::_clearPort() {
    port = NULL;
}

EngineCls::ip_C::OutBound_C::OutBound_C() {
}

EngineCls::ip_C::OutBound_C::~OutBound_C() {
}

EngineCls::ip_C::ip_C() : _p_(0) {
    initRelations();
}

EngineCls::ip_C::~ip_C() {
}

void EngineCls::ip_C::connectEngineCls(EngineCls* part) {
    InBound.setItsIIgnition(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

IIgnition* EngineCls::ip_C::getItsIIgnition() {
    return &InBound;
}

void EngineCls::ip_C::setItsIIgnition(IIgnition* p_IIgnition) {
    InBound.setItsIIgnition(p_IIgnition);
}

EngineCls::ip_C::InBound_C* EngineCls::ip_C::getInBound() const {
    return (EngineCls::ip_C::InBound_C*) &InBound;
}

EngineCls::ip_C::OutBound_C* EngineCls::ip_C::getOutBound() const {
    return (EngineCls::ip_C::OutBound_C*) &OutBound;
}

void EngineCls::ip_C::initRelations() {
    InBound._setPort(this);
}
//#]

EngineCls::EngineCls() {
    initRelations();
}

EngineCls::~EngineCls() {
}

void EngineCls::Ignite() {
    //#[ operation Ignite()
    //#]
}

EngineCls::ep_C* EngineCls::getEp() const {
    return (EngineCls::ep_C*) &ep;
}

EngineCls::ep_C* EngineCls::get_ep() const {
    return (EngineCls::ep_C*) &ep;
}

EngineCls::ip_C* EngineCls::getIp() const {
    return (EngineCls::ip_C*) &ip;
}

EngineCls::ip_C* EngineCls::get_ip() const {
    return (EngineCls::ip_C*) &ip;
}

EcuCls* EngineCls::getEcu() const {
    return (EcuCls*) &Ecu;
}

ThrottleCls* EngineCls::getThrottle() const {
    return (ThrottleCls*) &Throttle;
}

void EngineCls::initRelations() {
    {
        
        get_ep()->setItsIThrottle(Throttle.get_tp2()->getItsIThrottle());
        
    }
    {
        
        Ecu.get_ep2()->setItsIRpmGauge(get_ep()->getItsIRpmGauge());
        
    }
    {
        
        Throttle.get_tp1()->setItsIThrottleEcu(Ecu.get_ep1()->getItsIThrottleEcu());
        
    }
    if (get_ip() != NULL) {
        get_ip()->connectEngineCls(this);
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EngineCls.cpp
*********************************************************************/
