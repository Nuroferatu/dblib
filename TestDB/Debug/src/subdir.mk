################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/media/vasile/0549081133777C2C/STF/dblib/src/dbdriver.cpp \
/media/vasile/0549081133777C2C/STF/dblib/src/dblib.cpp \
/media/vasile/0549081133777C2C/STF/dblib/src/mysqldbdriver.cpp \
/media/vasile/0549081133777C2C/STF/dblib/src/sqlitedbdriver.cpp 

C_SRCS += \
/media/vasile/0549081133777C2C/STF/dblib/src/sqlite3.c 

OBJS += \
./src/dbdriver.o \
./src/dblib.o \
./src/mysqldbdriver.o \
./src/sqlite3.o \
./src/sqlitedbdriver.o 

CPP_DEPS += \
./src/dbdriver.d \
./src/dblib.d \
./src/mysqldbdriver.d \
./src/sqlitedbdriver.d 

C_DEPS += \
./src/sqlite3.d 


# Each subdirectory must supply rules for building sources it contributes
src/dbdriver.o: /media/vasile/0549081133777C2C/STF/dblib/src/dbdriver.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/dblib.o: /media/vasile/0549081133777C2C/STF/dblib/src/dblib.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/mysqldbdriver.o: /media/vasile/0549081133777C2C/STF/dblib/src/mysqldbdriver.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sqlite3.o: /media/vasile/0549081133777C2C/STF/dblib/src/sqlite3.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sqlitedbdriver.o: /media/vasile/0549081133777C2C/STF/dblib/src/sqlitedbdriver.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


