#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  float a,b,x;
   char c;

printf("Podaj pierwsza liczbe: \n");
scanf("%f", &a);

printf("Podaj druga liczbe: \n");
scanf("%f", &b);

getchar();
  x=a/b;
{if(b == 0)
 {printf("Nie dziel przez zero!");}
			else
			printf("Wynik dzielenia a/b to: %.8f\n",x);

}

}
