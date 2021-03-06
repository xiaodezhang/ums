LOCAL_PATH        := $(call my-dir)

#[1]name
MODULE            := log4cplusdll

#[2]Install path
LIB_INSTALL_PATH	:= $(LOCAL_PATH)/../../../10-common/lib
#EXE_INSTALL_PATH    := 

#[3]lib path
LIB_PATH          := 

#[4]include path				  
INC_PATH          := $(LOCAL_PATH)/../include \
				     $(LOCAL_PATH)/../../../10-common/include/tp/log4cplus-1.2.0 

SRC_CFILES	      := $(wildcard $(LOCAL_PATH)/../source/*.c)
SRC_CPPFILES	  := $(wildcard $(LOCAL_PATH)/../source/*.cpp)
SRC_CCFILES	      := $(wildcard $(LOCAL_PATH)/../source/*.cc)

#[5]src files
SRCS              := $(SRC_CFILES) $(SRC_CPPFILES) $(SRC_CCFILES)

#[6]lib names
LIBS              += 
DLLS              += 

#[7]build param
LDFLAGS           += -m32
CFLAGS            += -DINSIDE_LOG4CPLUS -m32

#[8]use gcc or g++
USEGCC = 0

#include $(BUILD_STATIC_LIBRARY)
include $(BUILD_SHARED_LIBRARY)
#include $(BUILD_EXECUTABLE)