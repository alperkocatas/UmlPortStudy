/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: GasPedalCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.h
*********************************************************************/

#ifndef GasPedalCls_H
#define GasPedalCls_H

//## auto_generated
#include <oxf\oxf.h>
//## class OutBound
#include "IThrottle.h"
//## package SampleModel

//## class GasPedalCls
class GasPedalCls {
public :

//#[ ignore
    //## package SampleModel
    class pp_C {
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
        class OutBound_C : public IThrottle {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C();
            
            //## auto_generated
            virtual ~OutBound_C();
            
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
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        pp_C();
        
        //## auto_generated
        virtual ~pp_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectGasPedalCls(GasPedalCls* part);
        
        //## auto_generated
        IThrottle* getItsIThrottle();
        
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
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GasPedalCls();
    
    //## auto_generated
    ~GasPedalCls();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pp_C* getPp() const;
    
    //## auto_generated
    pp_C* get_pp() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    pp_C pp;
//#]
};

#endif
/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\GasPedalCls.h
*********************************************************************/
