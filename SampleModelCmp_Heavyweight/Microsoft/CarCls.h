/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: CarCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\CarCls.h
*********************************************************************/

#ifndef CarCls_H
#define CarCls_H

//## auto_generated
#include <oxf\oxf.h>
//## classInstance Dashboard
#include "DashboardCls.h"
//## classInstance Engine
#include "EngineCls.h"
//## classInstance GasPedal
#include "GasPedalCls.h"
//## class InBound
#include "IIgnition.h"
//## package SampleModel

//## class CarCls
class CarCls {
public :

//#[ ignore
    //## package SampleModel
    class cp_C {
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
        
        protected :
        
            //## auto_generated
            void cleanUpRelations();
            
            ////    Relations and components    ////
            
            IIgnition* itsIIgnition;		//## link itsIIgnition
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
        cp_C();
        
        //## auto_generated
        virtual ~cp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IIgnition* getItsIIgnition();
        
        //## auto_generated
        void setItsIIgnition(IIgnition* p_IIgnition);
        
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
    CarCls();
    
    //## auto_generated
    ~CarCls();
    
    ////    Additional operations    ////
    
    //## auto_generated
    cp_C* getCp() const;
    
    //## auto_generated
    cp_C* get_cp() const;
    
    //## auto_generated
    DashboardCls* getDashboard() const;
    
    //## auto_generated
    EngineCls* getEngine() const;
    
    //## auto_generated
    GasPedalCls* getGasPedal() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    cp_C cp;
//#]

    DashboardCls Dashboard;		//## classInstance Dashboard
    
    EngineCls Engine;		//## classInstance Engine
    
    GasPedalCls GasPedal;		//## classInstance GasPedal
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\CarCls.h
*********************************************************************/
