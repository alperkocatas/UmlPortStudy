/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: ThrottleCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.cpp
*********************************************************************/

//## auto_generated
#include "ThrottleCls.h"
//## package SampleModel

//## class ThrottleCls
//#[ ignore
ThrottleCls::tp1_C::InBound_C::InBound_C() {
    port = NULL;
}

ThrottleCls::tp1_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

ThrottleCls::tp1_C* ThrottleCls::tp1_C::InBound_C::getPort() const {
    return port;
}

void ThrottleCls::tp1_C::InBound_C::setPort(ThrottleCls::tp1_C* p_tp1_C) {
    _setPort(p_tp1_C);
}

void ThrottleCls::tp1_C::InBound_C::cleanUpRelations() {
    if(port != NULL)
        {
            port = NULL;
        }
}

void ThrottleCls::tp1_C::InBound_C::__setPort(ThrottleCls::tp1_C* p_tp1_C) {
    port = p_tp1_C;
}

void ThrottleCls::tp1_C::InBound_C::_setPort(ThrottleCls::tp1_C* p_tp1_C) {
    __setPort(p_tp1_C);
}

void ThrottleCls::tp1_C::InBound_C::_clearPort() {
    port = NULL;
}

ThrottleCls::tp1_C::OutBound_C::OutBound_C() {
    itsIThrottleEcu = NULL;
}

ThrottleCls::tp1_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

void ThrottleCls::tp1_C::OutBound_C::SetThrottle() {
    
    if (itsIThrottleEcu != NULL) {
        itsIThrottleEcu->SetThrottle();
    }
    
}

IThrottleEcu* ThrottleCls::tp1_C::OutBound_C::getItsIThrottleEcu() const {
    return itsIThrottleEcu;
}

void ThrottleCls::tp1_C::OutBound_C::setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu) {
    itsIThrottleEcu = p_IThrottleEcu;
}

void ThrottleCls::tp1_C::OutBound_C::cleanUpRelations() {
    if(itsIThrottleEcu != NULL)
        {
            itsIThrottleEcu = NULL;
        }
}

ThrottleCls::tp1_C::tp1_C() : _p_(0) {
    initRelations();
}

ThrottleCls::tp1_C::~tp1_C() {
}

void ThrottleCls::tp1_C::connectThrottleCls(ThrottleCls* part) {
    
    InBound.setPort(this); // for IS_PORT macro support
    
}

IThrottleEcu* ThrottleCls::tp1_C::getItsIThrottleEcu() {
    return &OutBound;
}

void ThrottleCls::tp1_C::setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu) {
    OutBound.setItsIThrottleEcu(p_IThrottleEcu);
}

ThrottleCls::tp1_C::InBound_C* ThrottleCls::tp1_C::getInBound() const {
    return (ThrottleCls::tp1_C::InBound_C*) &InBound;
}

ThrottleCls::tp1_C::OutBound_C* ThrottleCls::tp1_C::getOutBound() const {
    return (ThrottleCls::tp1_C::OutBound_C*) &OutBound;
}

void ThrottleCls::tp1_C::initRelations() {
    InBound._setPort(this);
}

ThrottleCls::tp2_C::InBound_C::InBound_C() {
    itsIThrottle = NULL;
    port = NULL;
}

ThrottleCls::tp2_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void ThrottleCls::tp2_C::InBound_C::RequestThrottle() {
    
    if (itsIThrottle != NULL) {
        itsIThrottle->RequestThrottle();
    }
    
}

IThrottle* ThrottleCls::tp2_C::InBound_C::getItsIThrottle() const {
    return itsIThrottle;
}

void ThrottleCls::tp2_C::InBound_C::setItsIThrottle(IThrottle* p_IThrottle) {
    itsIThrottle = p_IThrottle;
}

ThrottleCls::tp2_C* ThrottleCls::tp2_C::InBound_C::getPort() const {
    return port;
}

void ThrottleCls::tp2_C::InBound_C::setPort(ThrottleCls::tp2_C* p_tp2_C) {
    _setPort(p_tp2_C);
}

void ThrottleCls::tp2_C::InBound_C::cleanUpRelations() {
    if(itsIThrottle != NULL)
        {
            itsIThrottle = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void ThrottleCls::tp2_C::InBound_C::__setPort(ThrottleCls::tp2_C* p_tp2_C) {
    port = p_tp2_C;
}

void ThrottleCls::tp2_C::InBound_C::_setPort(ThrottleCls::tp2_C* p_tp2_C) {
    __setPort(p_tp2_C);
}

void ThrottleCls::tp2_C::InBound_C::_clearPort() {
    port = NULL;
}

ThrottleCls::tp2_C::OutBound_C::OutBound_C() {
}

ThrottleCls::tp2_C::OutBound_C::~OutBound_C() {
}

ThrottleCls::tp2_C::tp2_C() : _p_(0) {
    initRelations();
}

ThrottleCls::tp2_C::~tp2_C() {
}

void ThrottleCls::tp2_C::connectThrottleCls(ThrottleCls* part) {
    InBound.setItsIThrottle(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

IThrottle* ThrottleCls::tp2_C::getItsIThrottle() {
    return &InBound;
}

void ThrottleCls::tp2_C::setItsIThrottle(IThrottle* p_IThrottle) {
    InBound.setItsIThrottle(p_IThrottle);
}

ThrottleCls::tp2_C::InBound_C* ThrottleCls::tp2_C::getInBound() const {
    return (ThrottleCls::tp2_C::InBound_C*) &InBound;
}

ThrottleCls::tp2_C::OutBound_C* ThrottleCls::tp2_C::getOutBound() const {
    return (ThrottleCls::tp2_C::OutBound_C*) &OutBound;
}

void ThrottleCls::tp2_C::initRelations() {
    InBound._setPort(this);
}
//#]

ThrottleCls::ThrottleCls() {
    initRelations();
}

ThrottleCls::~ThrottleCls() {
}

void ThrottleCls::RequestThrottle() {
    //#[ operation RequestThrottle()
    //#]
}

ThrottleCls::tp1_C* ThrottleCls::getTp1() const {
    return (ThrottleCls::tp1_C*) &tp1;
}

ThrottleCls::tp1_C* ThrottleCls::get_tp1() const {
    return (ThrottleCls::tp1_C*) &tp1;
}

ThrottleCls::tp2_C* ThrottleCls::getTp2() const {
    return (ThrottleCls::tp2_C*) &tp2;
}

ThrottleCls::tp2_C* ThrottleCls::get_tp2() const {
    return (ThrottleCls::tp2_C*) &tp2;
}

void ThrottleCls::initRelations() {
    if (get_tp1() != NULL) {
        get_tp1()->connectThrottleCls(this);
    }
    if (get_tp2() != NULL) {
        get_tp2()->connectThrottleCls(this);
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.cpp
*********************************************************************/
