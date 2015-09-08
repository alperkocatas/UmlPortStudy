/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EcuCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EcuCls.cpp
*********************************************************************/

//## auto_generated
#include "EcuCls.h"
//## package SampleModel

//## class EcuCls
//#[ ignore
EcuCls::ep1_C::InBound_C::InBound_C() {
    itsIThrottleEcu = NULL;
    port = NULL;
}

EcuCls::ep1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void EcuCls::ep1_C::InBound_C::SetThrottle() {
    
    if (itsIThrottleEcu != NULL) {
        itsIThrottleEcu->SetThrottle();
    }
    
}

IThrottleEcu* EcuCls::ep1_C::InBound_C::getItsIThrottleEcu() const {
    return itsIThrottleEcu;
}

void EcuCls::ep1_C::InBound_C::setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu) {
    itsIThrottleEcu = p_IThrottleEcu;
}

EcuCls::ep1_C* EcuCls::ep1_C::InBound_C::getPort() const {
    return port;
}

void EcuCls::ep1_C::InBound_C::setPort(EcuCls::ep1_C* p_ep1_C) {
    _setPort(p_ep1_C);
}

void EcuCls::ep1_C::InBound_C::cleanUpRelations() {
    if(itsIThrottleEcu != NULL)
        {
            itsIThrottleEcu = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void EcuCls::ep1_C::InBound_C::__setPort(EcuCls::ep1_C* p_ep1_C) {
    port = p_ep1_C;
}

void EcuCls::ep1_C::InBound_C::_setPort(EcuCls::ep1_C* p_ep1_C) {
    __setPort(p_ep1_C);
}

void EcuCls::ep1_C::InBound_C::_clearPort() {
    port = NULL;
}

EcuCls::ep1_C::OutBound_C::OutBound_C() {
}

EcuCls::ep1_C::OutBound_C::~OutBound_C() {
}

EcuCls::ep1_C::ep1_C() : _p_(0) {
    initRelations();
}

EcuCls::ep1_C::~ep1_C() {
}

void EcuCls::ep1_C::connectEcuCls(EcuCls* part) {
    InBound.setItsIThrottleEcu(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

IThrottleEcu* EcuCls::ep1_C::getItsIThrottleEcu() {
    return &InBound;
}

void EcuCls::ep1_C::setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu) {
    InBound.setItsIThrottleEcu(p_IThrottleEcu);
}

EcuCls::ep1_C::InBound_C* EcuCls::ep1_C::getInBound() const {
    return (EcuCls::ep1_C::InBound_C*) &InBound;
}

EcuCls::ep1_C::OutBound_C* EcuCls::ep1_C::getOutBound() const {
    return (EcuCls::ep1_C::OutBound_C*) &OutBound;
}

void EcuCls::ep1_C::initRelations() {
    InBound._setPort(this);
}

EcuCls::ep2_C::InBound_C::InBound_C() {
}

EcuCls::ep2_C::InBound_C::~InBound_C() {
}

EcuCls::ep2_C::OutBound_C::OutBound_C() {
    itsIRpmGauge = NULL;
}

EcuCls::ep2_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

void EcuCls::ep2_C::OutBound_C::SetRpm() {
    
    if (itsIRpmGauge != NULL) {
        itsIRpmGauge->SetRpm();
    }
    
}

IRpmGauge* EcuCls::ep2_C::OutBound_C::getItsIRpmGauge() const {
    return itsIRpmGauge;
}

void EcuCls::ep2_C::OutBound_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    itsIRpmGauge = p_IRpmGauge;
}

void EcuCls::ep2_C::OutBound_C::cleanUpRelations() {
    if(itsIRpmGauge != NULL)
        {
            itsIRpmGauge = NULL;
        }
}

EcuCls::ep2_C::ep2_C() : _p_(0) {
}

EcuCls::ep2_C::~ep2_C() {
}

void EcuCls::ep2_C::connectEcuCls(EcuCls* part) {
    
    
}

IRpmGauge* EcuCls::ep2_C::getItsIRpmGauge() {
    return &OutBound;
}

void EcuCls::ep2_C::setItsIRpmGauge(IRpmGauge* p_IRpmGauge) {
    OutBound.setItsIRpmGauge(p_IRpmGauge);
}

EcuCls::ep2_C::InBound_C* EcuCls::ep2_C::getInBound() const {
    return (EcuCls::ep2_C::InBound_C*) &InBound;
}

EcuCls::ep2_C::OutBound_C* EcuCls::ep2_C::getOutBound() const {
    return (EcuCls::ep2_C::OutBound_C*) &OutBound;
}
//#]

EcuCls::EcuCls() {
    initRelations();
}

EcuCls::~EcuCls() {
}

void EcuCls::SetThrottle() {
    //#[ operation SetThrottle()
    //#]
}

EcuCls::ep1_C* EcuCls::getEp1() const {
    return (EcuCls::ep1_C*) &ep1;
}

EcuCls::ep1_C* EcuCls::get_ep1() const {
    return (EcuCls::ep1_C*) &ep1;
}

EcuCls::ep2_C* EcuCls::getEp2() const {
    return (EcuCls::ep2_C*) &ep2;
}

EcuCls::ep2_C* EcuCls::get_ep2() const {
    return (EcuCls::ep2_C*) &ep2;
}

void EcuCls::initRelations() {
    if (get_ep1() != NULL) {
        get_ep1()->connectEcuCls(this);
    }
    if (get_ep2() != NULL) {
        get_ep2()->connectEcuCls(this);
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EcuCls.cpp
*********************************************************************/
