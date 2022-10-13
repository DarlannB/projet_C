#include <stdio.h>
#include <string.h>

int cargo()
{
int bagages;
int cargo;
int pax=100;
char typevol;
int cargo_total;

printf ("Entrer le type de vol : D=domestique, I=intercontinental ou E=europeen \n");
scanf ("%c", &typevol);

if (typevol == 'D')
    {
    bagages= pax*11;
    }

if (typevol == 'I')
    {
    bagages= pax*15;
    }

if (typevol == 'E')
    {
    bagages= pax*13;
    }

printf ("Le poids total des bagages est : %d kg  \n",bagages);

printf ("Entrer le poids du cargo souhaite en kg :");
scanf ("%d", &cargo);

cargo_total= cargo+bagages;

printf("Le poids total du cargo est : %d kg",cargo_total);

}

int main()
{
    cargo();

}