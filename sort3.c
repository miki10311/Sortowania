#include <stdio.h>

/* sortowanie przez wstawianie dla tablicy indeksowanej bezpośrednio */
int main()
{
int i,j,wymiar,pomoc;  /* zmienna wymiar to wymiar deklarowanej tablicy */
                       /* zmienna pomoc to zmienna pomocnicza dzięki której zamieniamy miejscami liczby */

printf("Wprowadź ilość liczb do posortownia: ");
scanf("%d",&wymiar);

int tab[wymiar];
printf("Wprowadź kolejno liczby: ");

for(i=0; i<wymiar; i++)    /* pętla umożliwiająca wprowadzenie określonej ilości liczb */
{
    scanf("%d",&tab[i]);
}

/* sortowanie przez wstawianie */
for (i=0; i<wymiar; i++)               /* pętla pozwalająca sprawdzić kolejne elementy */
    {
        pomoc=tab[i];                  /* zmienna pomocnicza zapisująca wartość tab[i], na wypadek zmiany */
        for (j=i-1; j>=0 && tab[j]>pomoc; j--) 
        {                              /* pętla sprawdzająca poprzedni element dla danego elementu do momentu wyjścia z tablicy */
            tab[j+1]=tab[j];           /* zamiany następują wielokrotnie, gdyż każdy kolejny element ze stosu przechodzi przez pewną część tablicy */
        }
        tab[j+1]=pomoc;
    }


for(i=0; i<wymiar; i++)    /* wypisanie liczb */
{
    printf("%d ",tab[i]);
}

printf("\n");

return 0;
}
