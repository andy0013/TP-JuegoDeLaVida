################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Celula.cpp \
../src/Contador.cpp \
../src/ControlJuego.cpp \
../src/CreadorDeLista.cpp \
../src/Interaccion.cpp \
../src/Lector.cpp \
../src/Memoria.cpp \
../src/Parcela.cpp \
../src/Tablero.cpp \
../src/Validador.cpp \
../src/testeo.cpp 

OBJS += \
./src/Celula.o \
./src/Contador.o \
./src/ControlJuego.o \
./src/CreadorDeLista.o \
./src/Interaccion.o \
./src/Lector.o \
./src/Memoria.o \
./src/Parcela.o \
./src/Tablero.o \
./src/Validador.o \
./src/testeo.o 

CPP_DEPS += \
./src/Celula.d \
./src/Contador.d \
./src/ControlJuego.d \
./src/CreadorDeLista.d \
./src/Interaccion.d \
./src/Lector.d \
./src/Memoria.d \
./src/Parcela.d \
./src/Tablero.d \
./src/Validador.d \
./src/testeo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


