################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BuscadorDeDatos.cpp \
../src/Celula.cpp \
../src/Interaccion.cpp \
../src/Lector.cpp \
../src/Parcela.cpp \
../src/Tablero.cpp \
../src/testeo.cpp 

OBJS += \
./src/BuscadorDeDatos.o \
./src/Celula.o \
./src/Interaccion.o \
./src/Lector.o \
./src/Parcela.o \
./src/Tablero.o \
./src/testeo.o 

CPP_DEPS += \
./src/BuscadorDeDatos.d \
./src/Celula.d \
./src/Interaccion.d \
./src/Lector.d \
./src/Parcela.d \
./src/Tablero.d \
./src/testeo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


