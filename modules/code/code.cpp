//=====[Libraries]=============================================================

#include "code.h"

#include "pc_serial_com.h"

//=====[Declaration of private defines]========================================

#define CODE_LENGTH 4

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

int codeSequence[CODE_LENGTH]   = { 1, 1, 0, 0 }; //idk if this should be private or public (depends if used elsewhere, prob like unlocking subsytem)

//=====[Declaration and initialization of private global variables]============

static int buttonBeingCompared = 0;

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void resetCode() {
    pcSerialComStringWrite( "Please enter a new code sequence.\r\n" );
    pcSerialComStringWrite( "The allowable length of the sequence is 4.\r\n" );
    pcSerialComStringWrite( "The sequence may include any of:\r\n" );
    pcSerialComStringWrite( "'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'\r\n\r\n");



    for (int buttonBeingCompared = 0; 
         buttonBeingCompared < CODE_LENGTH; 
         buttonBeingCompared++) {

        char receivedChar;
        pcSerialComCharRead( &receivedChar );
        pcSerialComStringWrite( "*" ); 

        if (receivedChar >= '0' && receivedChar <= '9') {
            codeSequence[buttonBeingCompared] = receivedChar - '0';
        } else {
            pcSerialComStringWrite( "Invalid input! Please enter a valid character (0-9 or A-D).\r\n" );
            buttonBeingCompared--; 
        }
    }

    pcSerialComStringWrite( "\r\nNew code generated\r\n\r\n");
}

//=====[Implementations of private functions]==================================