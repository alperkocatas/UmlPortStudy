/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: ThrottleCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.h
*********************************************************************/

#ifndef ThrottleCls_H
#define ThrottleCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class ThrottleCls
#include "IThrottle.h"
//## class OutBound
#include "IThrottleEcu.h"
//## package SampleModel

//## class ThrottleCls
class ThrottleCls : public IThrottle {
public :

//#[ ignore
    //## package SampleModel
    class tp1_C {
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
            
            ////    Additional operations    ////
            
            //## auto_generated
            tp1_C* getPort() const;
            
            //## auto_generated
            void setPort(tp1_C* p_tp1_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            tp1_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(tp1_C* p_tp1_C);
            
            //## auto_generated
            void _setPort(tp1_C* p_tp1_C);
            
            //## auto_generated
            void _clearPort();
        };
        
        //## package SampleModel
        class OutBound_C : public IThrottleEcu {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void SetThrottle();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IThrottleEcu* getItsIThrottleEcu() const;
            
            //## auto_generated
            void setItsIThrottleEcu(IThrottleEcu* p_IThrottleEcu);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IThrottleEcu* itsIThrottleEcu;		//## link itsIThrottleEcu
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        tp1_C();
        
        //## auto_generated
        virtual ~tp1_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThrottleCls(ThrottleCls* part);
        
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
    class tp2_C {
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
            
            //## auto_generated
            tp2_C* getPort() const;
            
            //## auto_generated
            void setPort(tp2_C* p_tp2_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IThrottle* itsIThrottle;		//## link itsIThrottle
            
            tp2_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(tp2_C* p_tp2_C);
            
            //## auto_generated
            void _setPort(tp2_C* p_tp2_C);
            
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
        tp2_C();
        
        //## auto_generated
        virtual ~tp2_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectThrottleCls(ThrottleCls* part);
        
        //## auto_generated
        IThrottle* getItsIThrottle();
        
        //## auto_generated
        void setItsIThrottle(IThrottle* p_IThrottle);
        
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
    ThrottleCls();
    
    //## auto_generated
    virtual ~ThrottleCls();
    
    ////    Operations    ////
    
    //## operation RequestThrottle()
    virtual void RequestThrottle();
    
    ////    Additional operations    ////
    
    //## auto_generated
    tp1_C* getTp1() const;
    
    //## auto_generated
    tp1_C* get_tp1() const;
    
    //## auto_generated
    tp2_C* getTp2() const;
    
    //## auto_generated
    tp2_C* get_tp2() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    tp1_C tp1;
    
    tp2_C tp2;
//#]
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.h
*********************************************************************/
