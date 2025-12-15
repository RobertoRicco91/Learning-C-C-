/*
Esercizio 4f.c
*/

#include <stdio.h>
#include "myLib.h"
#include <stdbool.h>

void main (void)
{   float n;
    bool numeroOK;
    float sommaRadici=0;
	do
	{
	  n=getN();
	  numeroOK=verificaNumero(n);
	  if (numeroOK==1)
	  {
	  	sommaRadici+=calcolaRadiceQuadrata(n);
	  }

	}
	while (numeroOK==1);

	printf("\nERRORE: hai inserito il numero %f che � fuori dal dominio della funzione radice quadrata (x>=0)",n);
	printf("\nLa somma delle radici cumulata fino ad ora e\': %2.2f",sommaRadici);
}
