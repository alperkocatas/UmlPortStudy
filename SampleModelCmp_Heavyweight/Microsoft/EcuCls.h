/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EcuCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EcuCls.h
*********************************************************************/

#ifndef EcuCls_H
#define EcuCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class EcuCls
#include "IThrottleEcu.h"
//## class OutBound
#include "IRpmGauge.h"
//## package SampleModel

//## class EcuCls
class EcuCls : public IThrottleEcu {
public :

//#[ ignore
    //## package SampleModel
    class ep1_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SampleModel
        class InBound_C : public IThrottleEcu {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void SetThrottle();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IThrottleEcu* getItsIThrottleEcu() const;
            
            //## auto_generated
            void setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu);
            
            //## auto_generated
            ep1_C* getPort() const;
            
            //## auto_generated
            void setPort(ep1_C* p_ep1_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IThrottleEcu* itsIThrottleEcu;		//## link itsIThrottleEcu
            
            ep1_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(ep1_C* p_ep1_C);
            
            //## auto_generated
            void _setPort(ep1_C* p_ep1_C);
            
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
        ep1_C();
        
        //## auto_generated
        virtual ~ep1_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEcuCls(EcuCls* part);
        
        //## auto_generated
        IThrottleEcu* getItsIThrottleEcu();
        
        //## auto_generated
        void setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu);
        
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
    
    //## package SampleModel
    class ep2_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SampleModel
        class InBound_C {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
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
        ep2_C();
        
        //## auto_generated
        virtual ~ep2_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectEcuCls(EcuCls* part);
        
        //## auto_generated
        IRpmGauge* getItsIRpmGauge();
        
        //## auto_generated
        void setItsIRpmGauge(IRpmGauge* p_IRpmGauge);
        
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
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EcuCls();
    
    //## auto_generated
    virtual ~EcuCls();
    
    ////    Operations    ////
    
    //## operation SetThrottle()
    virtual void SetThrottle();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ep1_C* getEp1() const;
    
    //## auto_generated
    ep1_C* get_ep1() const;
    
    //## auto_generated
    ep2_C* getEp2() const;
    
    //## auto_generated
    ep2_C* get_ep2() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    ep1_C ep1;
    
    ep2_C ep2;
//#]
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EcuCls.h
*********************************************************************/
