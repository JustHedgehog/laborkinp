#include <stdio.h>
#include "naglowki.h"

//nad tym wrzucie linki do plikow


int main()
{
	int a,b;
	printf("Witamy w wielkim swiecie \n");

	printf("Podaj jakie liczbe a : ");
	scanf("%i" , &a);
	printf("\nPodaj liczbe b : ");
	scanf("%i" , &b);

	printf("Oto wynik odejmowania : %i" , odejmowanie(a,b));
	printf("Oto wynik mnozenia:	%i" , mnozenie(a, b));
	printf("Oto wynik dodawania:	%i" , dodawanie(x, y));
        printf("Oto wynik dzielenia:    %i" , dzielenie(a,b));
	return 0;


}
