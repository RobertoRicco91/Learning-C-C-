/*es_vettori_istogrammaVerticale.c*/
/*scrivere un programma che riceve 10 numeri positivi. alla fine dell'immissione il programma stampera un istogramma verticale che rappresenter i valori immessi dal utente*/

/*Program in C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MAX_VALUE 6


/*dichiarazioni funzioni*/

// int istogrammaVerticale(int vettore[MAX]);
void visualizzaIstogrammaVerticale(int v[], int);


/*function main begins program execution*/
int main(void)
{
    int v[MAX] = {5,3,6,2,4,1,3,2,4,3};

    visualizzaIstogrammaVerticale(v, MAX_VALUE);

    return 0;/*indicate that program ended successfully*/
}

/*definizioni funzioni*/
void visualizzaIstogrammaVerticale(int v[],int valMassimo){

  for(int riga=valMassimo;riga>=1;riga--){ //comincio dalla prima riga e scendo
  	for (int colonna=0;colonna<MAX;colonna++){ //per ogni valore nel vettore
  		if (riga<=v[colonna]){
  			printf("*");
		  }
		else {
			printf(" ");
		}
	  }
	printf("\n");

  }

  for (int i=0;i<MAX;i++){
  	printf("%d",v[i]);
  }

}
