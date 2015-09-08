
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC10x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="D:\apps\Rhapsody811\Share"
RHPROOT="D:\apps\Rhapsody811"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=SampleModelCmp

all : $(TARGET_NAME)$(EXE_EXT) SampleModelCmp.mak

TARGET_MAIN=MainSampleModelCmp

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  ThrottleCls.obj \
  EngineCls.obj \
  GasPedalCls.obj \
  IThrottle.obj \
  EcuCls.obj \
  IThrottleEcu.obj \
  IRpmGauge.obj \
  DashboardCls.obj \
  CarCls.obj \
  IIgnition.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






ThrottleCls.obj : ThrottleCls.cpp ThrottleCls.h    IThrottleEcu.h IThrottle.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ThrottleCls.obj" "ThrottleCls.cpp" 



EngineCls.obj : EngineCls.cpp EngineCls.h    ThrottleCls.h EcuCls.h IRpmGauge.h IIgnition.h IThrottle.h IThrottleEcu.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EngineCls.obj" "EngineCls.cpp" 



GasPedalCls.obj : GasPedalCls.cpp GasPedalCls.h    IThrottle.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GasPedalCls.obj" "GasPedalCls.cpp" 



IThrottle.obj : IThrottle.cpp IThrottle.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IThrottle.obj" "IThrottle.cpp" 



EcuCls.obj : EcuCls.cpp EcuCls.h    IRpmGauge.h IThrottleEcu.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EcuCls.obj" "EcuCls.cpp" 



IThrottleEcu.obj : IThrottleEcu.cpp IThrottleEcu.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IThrottleEcu.obj" "IThrottleEcu.cpp" 



IRpmGauge.obj : IRpmGauge.cpp IRpmGauge.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IRpmGauge.obj" "IRpmGauge.cpp" 



DashboardCls.obj : DashboardCls.cpp DashboardCls.h    IRpmGauge.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DashboardCls.obj" "DashboardCls.cpp" 



CarCls.obj : CarCls.cpp CarCls.h    DashboardCls.h EngineCls.h GasPedalCls.h IRpmGauge.h IIgnition.h IThrottle.h IThrottleEcu.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CarCls.obj" "CarCls.cpp" 



IIgnition.obj : IIgnition.cpp IIgnition.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IIgnition.obj" "IIgnition.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) SampleModelCmp.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) SampleModelCmp.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist ThrottleCls.obj erase ThrottleCls.obj
	if exist EngineCls.obj erase EngineCls.obj
	if exist GasPedalCls.obj erase GasPedalCls.obj
	if exist IThrottle.obj erase IThrottle.obj
	if exist EcuCls.obj erase EcuCls.obj
	if exist IThrottleEcu.obj erase IThrottleEcu.obj
	if exist IRpmGauge.obj erase IRpmGauge.obj
	if exist DashboardCls.obj erase DashboardCls.obj
	if exist CarCls.obj erase CarCls.obj
	if exist IIgnition.obj erase IIgnition.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
