//=====[Libraries]=============================================================

#include "display.h"

//=====[Defines]===============================================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration and initialization of public global variables]=============

//=====[Declarations (prototypes) of public functions]=========================

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    displayInit();
    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "hello" );
    displayCharPositionWrite ( 0,1 );
    displayStringWrite( "   a            ");
    while (true) {
        
    }
}



/*
//=====[Libraries]=============================================================

//#include "parking_system.h"



#include "display.h"

//=====[Defines]===============================================================

//=====[Declaration of public data types]======================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration and initialization of public global variables]=============

//=====[Declarations (prototypes) of public functions]=========================

int main()
{
    displayInit();
    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "hello" );
    displayCharPositionWrite ( 0,1 );
    displayStringWrite( "   a            ");
    //parkingSystemInit(); 
    while ( true ) {
        //parkingSystemUpdate();
    }
}

//=====[Implementations of public functions]===================================

*/