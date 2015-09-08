/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: GasPedalCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.cpp
*********************************************************************/

//## auto_generated
#include "GasPedalCls.h"
//## package SampleModel

//## class GasPedalCls
//#[ ignore
GasPedalCls::pp_C::InBound_C::InBound_C() {
}

GasPedalCls::pp_C::InBound_C::~InBound_C() {
}

GasPedalCls::pp_C::OutBound_C::OutBound_C() {
    itsIThrottle = NULL;
}

GasPedalCls::pp_C::OutBound_C::~OutBound_C() {
    cleanUpRelations();
}

void GasPedalCls::pp_C::OutBound_C::RequestThrottle() {
    
    if (itsIThrottle != NULL) {
        itsIThrottle->RequestThrottle();
    }
    
}

IThrottle* GasPedalCls::pp_C::OutBound_C::getItsIThrottle() const {
    return itsIThrottle;
}

void GasPedalCls::pp_C::OutBound_C::setItsIThrottle(IThrottle* p_IThrottle) {
    itsIThrottle = p_IThrottle;
}

void GasPedalCls::pp_C::OutBound_C::cleanUpRelations() {
    if(itsIThrottle != NULL)
        {
            itsIThrottle = NULL;
        }
}

GasPedalCls::pp_C::pp_C() : _p_(0) {
}

GasPedalCls::pp_C::~pp_C() {
}

void GasPedalCls::pp_C::connectGasPedalCls(GasPedalCls* part) {
    
    
}

IThrottle* GasPedalCls::pp_C::getItsIThrottle() {
    return &OutBound;
}

void GasPedalCls::pp_C::setItsIThrottle(IThrottle* p_IThrottle) {
    OutBound.setItsIThrottle(p_IThrottle);
}

GasPedalCls::pp_C::InBound_C* GasPedalCls::pp_C::getInBound() const {
    return (GasPedalCls::pp_C::InBound_C*) &InBound;
}

GasPedalCls::pp_C::OutBound_C* GasPedalCls::pp_C::getOutBound() const {
    return (GasPedalCls::pp_C::OutBound_C*) &OutBound;
}
//#]

GasPedalCls::GasPedalCls() {
    initRelations();
}

GasPedalCls::~GasPedalCls() {
}

GasPedalCls::pp_C* GasPedalCls::getPp() const {
    return (GasPedalCls::pp_C*) &pp;
}

GasPedalCls::pp_C* GasPedalCls::get_pp() const {
    return (GasPedalCls::pp_C*) &pp;
}

void GasPedalCls::initRelations() {
    if (get_pp() != NULL) {
        get_pp()->connectGasPedalCls(this);
    }
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.cpp
*********************************************************************/
