################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ComplexTest.cpp \
../src/NewMatrixTest.cpp \
../src/Test.cpp 

OBJS += \
./src/ComplexTest.o \
./src/NewMatrixTest.o \
./src/Test.o 

CPP_DEPS += \
./src/ComplexTest.d \
./src/NewMatrixTest.d \
./src/Test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1z -I"/Users/chrissherfield/eclipse-workspace/cstoolsTest/cute" -I"/Users/chrissherfield/eclipse-workspace/cstools" -O0 -g3 -Wall -c -fmessage-length=0 -Wno-attributes -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


