/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: DashboardCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\DashboardCls.h
*********************************************************************/

#ifndef DashboardCls_H
#define DashboardCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class DashboardCls
#include "IRpmGauge.h"
//## package SampleModel

//## class DashboardCls
class DashboardCls : public IRpmGauge {
public :

//#[ ignore
    //## package SampleModel
    class Dp_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package SampleModel
        class InBound_C : public IRpmGauge {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C();
            
            //## auto_generated
            virtual ~InBound_C();
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void SetRpm();
            
            ////    Additional operations    ////
            
            //## auto_generated
            IRpmGauge* getItsIRpmGauge() const;
            
            //## auto_generated
            void setItsIRpmGauge(IRpmGauge* p_IRpmGauge);
            
            //## auto_generated
            Dp_C* getPort() const;
            
            //## auto_generated
            void setPort(Dp_C* p_Dp_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IRpmGauge* itsIRpmGauge;		//## link itsIRpmGauge
            
            Dp_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(Dp_C* p_Dp_C);
            
            //## auto_generated
            void _setPort(Dp_C* p_Dp_C);
            
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
        Dp_C();
        
        //## auto_generated
        virtual ~Dp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDashboardCls(DashboardCls* part);
        
        //## auto_generated
        IRpmGauge* getItsIRpmGauge();
        
        //## auto_generated
        void setItsIRpmGauge(IRpmGauge* p_IRpmGauge);
        
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
    DashboardCls();
    
    //## auto_generated
    virtual ~DashboardCls();
    
    ////    Operations    ////
    
    //## operation SetRpm()
    virtual void SetRpm();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Dp_C* getDp() const;
    
    //## auto_generated
    Dp_C* get_Dp() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    Dp_C Dp;
//#]
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\DashboardCls.h
*********************************************************************/
