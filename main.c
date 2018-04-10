/************************** main.c ******************************
        Source file number 1. main function
*****************************************************************/

#include <stdio.h>
#include <stdlib.h>


/*  Function's Declaration */
int IntOK(char string[]);
int IntSizeOK(char string[]);

/* Function MAIN */

int main()
{
    /* Variable declaration */
	int DNI, control1, control2;
    char letra;
    char go;
    char numeroDNIS[9]; //max size number to read = 8

    do {
        /* Variable definition */
        DNI = 0;
        letra = ' ';
        go = 'n';
        control1 = 0;
        control2 = 0;

        system("cls"); // clear screen for windows
        //system("clear"); // clear screen for linux

        /* Reading values from console - input */
        do
        {
            fflush(stdin);//cleaning buffer
            printf("\nNumero DNI: ");
            scanf("%s", numeroDNIS);
            fflush(stdin);//cleaning buffer

            control1 = IntOK(numeroDNIS);

            if (control1 == 0) {
            	printf("\nFormato Incorrecto\n");
            }

            control2 = IntSizeOK(numeroDNIS);

            if (control2 == 0) {
               	printf("\nTamaño Incorrecto\n");
            }
        }
        while (control1  == 0 || control2 == 0);


        /* calculation operation */
        DNI = atoi (numeroDNIS);
        int valor = DNI%23;
        //printf("\nEl modulo es %d\n", valor );

        switch ( valor ) {
        case 0:
        	letra = 'T';
          break;
        case 1:
        	letra = 'R';
          break;
        case 2:
        	letra = 'W';
          break;
        case 3:
        	letra = 'A';
          break;
        case 4:
            letra = 'G';
          break;
        case 5:
        	letra = 'M';
          break;
        case 6:
        	letra = 'Y';
          break;
        case 7:
        	letra = 'F';
          break;
        case 8:
        	letra = 'P';
          break;
        case 9:
        	letra = 'D';
          break;
        case 10:
        	letra = 'X';
          break;
        case 11:
        	letra = 'B';
          break;
        case 12:
        	letra = 'N';
          break;
        case 13:
        	letra = 'J';
          break;
        case 14:
        	letra = 'Z';
          break;
        case 15:
        	letra = 'S';
          break;
        case 16:
        	letra = 'Q';
          break;
        case 17:
        	letra = 'V';
          break;
        case 18:
        	letra = 'H';
          break;
        case 19:
        	letra = 'L';
          break;
        case 20:
        	letra = 'C';
          break;
        case 21:
        	letra = 'K';
          break;
        case 22:
        	letra = 'E';
          break;
        default:
        	printf("\nError");
        	return 1;
          break;
        }

        /* printing output */
        printf("\nLa letra para el numero DNI:%d es:%c  %d-%c\n", DNI, letra, DNI, letra );

        printf("\nCalcular la letra de otro numero de DNI y/n (yes or no)\n");
                go = getchar();
                //printf("\nRespuesta %c", go);
                while (go != 'y' && go != 'n')
                {
                    printf("\nRespuesta incorrecta\n");
                    printf("Calcular la letra de otro numero de DNI y/n (yes or no)");
                    go = getchar();
                    fflush(stdin);//cleaning buffer
                }
    	}
        while (go == 'y');

    system("pause"); //for windows
    return 0;
}

