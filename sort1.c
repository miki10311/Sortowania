#include <stdio.h>

/* sortowanie bąbelkowe dla tablicy indeksowanej bezpośrednio */
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

/* algorytm sortowania bąbelkowego */
for(i=0;i<wymiar-1;i++)
{
    for (j=0; j<wymiar-1-i; j++)
    {
        if (tab[j]>tab[j+1])      /* sprawdzenie który z sąsiednich elementów jest większy */
        {
            pomoc=tab[j];         /* zastosowanie zmiennej pomocniczej do zamiany wartości liczb */
            tab[j]=tab[j+1];
            tab[j+1]=pomoc;
        }

    }
}


printf("Posortowane liczby:");   /* wypisanie liczb */
for(i=0; i<wymiar; i++)
{
    printf("%d ",tab[i]);
}

printf("\n");

return 0;
}
