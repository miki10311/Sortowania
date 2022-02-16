#include <stdio.h>

/* sortowanie bąbelkowe dla tablicy indeksowanej pośrednio */
int main()
{
int i,j,wymiar,pomoc,pomoc1;      /* zmienna wymiar to wymiar deklarowanej tablicy */
                                  /* zmienne pomoc i pomoc1 to zmienne pomocnicze dzięki którym zamieniamy miejscami liczby */

printf("Wprowadź ilość znaków do posortowania wg indeksów: ");
scanf("%d",&wymiar);

wymiar++;          /* należy pamiętać o ostatnim elemencie tablicy char (druga tablica ze znakami) '/0' */

char tab[wymiar];
printf("Wprowadź znaki (bez spacji): ");        /* pętla umożliwiająca wprowadzenie określonej ilości liczb */
for(i=0; i<wymiar; i++)
{
    scanf("%c",&tab[i]);
}

int indeks[wymiar];
printf("Wprowadź indeksy odpowiadające znakom (indeksowanie od 0; ze spacjami): ");   
indeks[0]=wymiar-1;                 /* wspomniany wyżej element kończący */
for(i=1; i<wymiar; i++)             /* pętla umożliwiająca wprowadzenie określonej ilości liczb */
{
    scanf("%d",&indeks[i]);
}


/* algorytm sortowania bąbelkowego */
for(i=0;i<wymiar-1;i++)
{
    for (j=0; j<wymiar-1-i; j++)
    {
        if (indeks[j]>indeks[j+1])      /* sprawdzenie który z sąsiednich elementów jest większy */
        {
        pomoc=indeks[j];         /* zastosowanie zmiennej pomocniczej do zamiany wartości liczb */
        pomoc1=tab[j];           /* dla indeksowania pośredniego równolegle wykonujemy operacje dla obu tablic */

        indeks[j]=indeks[j+1];
        tab[j]=tab[j+1];

        indeks[j+1]=pomoc;
        tab[j+1]=pomoc1;
        }

    }
}


for(i=0; i<wymiar; i++)
{
    printf("%d ",indeks[i]);    /* wypisanie indeksów */
}

printf("\n");

for(i=0; i<wymiar; i++)      /* wypisanie odpowiadających znaków */
{
    printf("%c ",tab[indeks[i]]);         /* charakterystyczne wywołanie dla tablic indeksowanych pośrednio */
}

printf("\n");

return 0;
}