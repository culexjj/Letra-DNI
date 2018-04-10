/************************** doubleOK.c **************************************************
        Source File number 3. Function check if number has a proper size
****************************************************************************************/

/* Function intOK. Arguments; string to Check. Function return 1(True) provided that format is right, 0(false) otherwise */

#include <string.h>
#include <ctype.h>

int IntSizeOK(char myString[])
{
    int DNI = atoi (myString);
	int tamano = 1;

	//control tama�o numero dni
	while(DNI/10>0)
		{
	     DNI=DNI/10;
	     tamano++;
        }

	if (tamano > 8){
		//printf("\nEl numero es %d\n",DNI );
	    return 0; //tama�o incorrecto
	}

    return 1; //tamano correcto
}
