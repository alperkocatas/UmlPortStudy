/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EngineCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EngineCls.h
*********************************************************************/

#ifndef EngineCls_H
#define EngineCls_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance Ecu
#include "EcuCls.h"
//## class EngineCls
#include "IIgnition.h"
//## classInstance Throttle
#include "ThrottleCls.h"
//## class InBound
#include "IThrottle.h"
//## class OutBound
#include "IRpmGauge.h"
//## package SampleModel

//## class EngineCls
class EngineCls : public IIgnition {
public :

//#[ ignore
    //## package SampleModel
    class ep_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SampleModel
        class InBound_C : public IThrottle {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void RequestThrottle();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IThrottle* getItsIThrottle() const;
            
            //## auto_generated
            void setItsIThrottle(IThrottle* p_IThrottle);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IThrottle* itsIThrottle;		//## link itsIThrottle
        };
        
        //## package SampleModel
        class OutBound_C : public IRpmGauge {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void SetRpm();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IRpmGauge* getItsIRpmGauge() const;
            
            //## auto_generated
            void setItsIRpmGauge(IRpmGauge* p_IRpmGauge);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IRpmGauge* itsIRpmGauge;		//## link itsIRpmGauge
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ep_C();
        
        //## auto_generated
        virtual ~ep_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IRpmGauge* getItsIRpmGauge();
        
        //## auto_generated
        IThrottle* getItsIThrottle();
        
        //## auto_generated
        void setItsIRpmGauge(IRpmGauge* p_IRpmGauge);
        
        //## auto_generated
        void setItsIThrottle(IThrottle* p_IThrottle);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
    
    //## package SampleModel
    class ip_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SampleModel
        class InBound_C : public IIgnition {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void Ignite();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IIgnition* getItsIIgnition() const;
            
            //## auto_generated
            void setItsIIgnition(IIgnition* p_IIgnition);
            
            //## auto_generated
            ip_C* getPort() const;
            
            //## auto_generated
            void setPort(ip_C* p_ip_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IIgnition* itsIIgnition;		//## link itsIIgnition
            
            ip_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(ip_C* p_ip_C);
            
            //## auto_generated
            void _setPort(ip_C* p_ip_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package SampleModel
        class OutBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ip_C();
        
        //## auto_generated
        virtual ~ip_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEngineCls(EngineCls* part);
        
        //## auto_generated
        IIgnition* getItsIIgnition();
        
        //## auto_generated
        void setItsIIgnition(IIgnition* p_IIgnition);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound() const;
        
        //## auto_generated
        OutBound_C* getOutBound() const;
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EngineCls();
    
    //## auto_generated
    virtual ~EngineCls();
    
    ////    Operations    ////
    
    //## operation Ignite()
    virtual void Ignite();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ep_C* getEp() const;
    
    //## auto_generated
    ep_C* get_ep() const;
    
    //## auto_generated
    ip_C* getIp() const;
    
    //## auto_generated
    ip_C* get_ip() const;
    
    //## auto_generated
    EcuCls* getEcu() const;
    
    //## auto_generated
    ThrottleCls* getThrottle() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    ep_C ep;
    
    ip_C ip;
//#]

    EcuCls Ecu;		//## classInstance Ecu
    
    ThrottleCls Throttle;		//## classInstance Throttle
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EngineCls.h
*********************************************************************/
