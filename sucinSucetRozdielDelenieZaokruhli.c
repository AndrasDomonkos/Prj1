#include <stdio.h>

int main(void)
{

    int cislo1;
    int cislo2;

    printf (" Zadaj 1. cislo\n:");
    scanf ("%i", &cislo1);
    printf (" Zadaj 2. cislo\n:");
    scanf ("%i", &cislo2);

    if (cislo1 > cislo2)
    {
        printf ("Sucin zadanych cisiel=%i\n", cislo1*cislo2);
        printf ("Sucet zadanych cisie=%i\n", cislo1+cislo2);
        printf ("Rozdiel zadanych cisiel vacsieho od mensieho=%i\n", cislo1-cislo2);

        if (cislo1 == 0 || cislo2==0)
        {
            printf("Podiel zadanych cisiel: vacsieho od mensieho=0\n");
            printf("Podiel zadanych cisiel vacsieho od mensieho zaokruhleny na cele cislo=0");
        
        }
         else 
        {
            printf ("Podiel zadanych cisiel: vacsieho od mensieho=%f\n", (float)cislo1/(float)cislo2);
            printf ("Podiel zadanych cisiel vacsieho od mensieho zaokruhleny na cele cislo=0%.0f\n", (float)cislo1/(float)cislo2);
        }
    }
    else
    {
        printf ("Sucin zadanych cisiel=%i\n", cislo2*cislo1);
        printf ("Sucet zadanych cisie=%i\n", cislo2+cislo1);
        printf ("Rozdiel zadanych cisiel vacsieho od mensieho=%i\n", cislo2-cislo1);

        if (cislo1 == 0 || cislo2 == 0)

        {
            printf("Podiel zadanych cisiel vacsieho od mensieho=0\n");
           printf("Podiel zadanych cisiel vacsieho od mensieho zaokruhlenz na cele cislo=0");

        }
         else
        {

            printf ("Podiel zadanych cisiel vacsieho od mensieho=%f\n", (float)cislo1/(float)cislo2);
            printf ("Podiel zadanych cisiel vacsieho od mensieho zaokruhleny na cele cislo=%.0f\n", (float)cislo1/(float)cislo2);
        }}}