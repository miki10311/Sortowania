#include <stdio.h>

/* sortowanie przez wstawianie dla tablicy indeksowanej pośrednio */
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

/* sortowanie przez wstawianie */
for(i=0; i<wymiar; i++)               /* pętla pozwalająca sprawdzić kolejne elementy */
    {
        pomoc=indeks[i];              /* zmienne pomocnicze zapisujące wartość tab[i] i indeks[i], na wypadek zmiany */
        pomoc1=tab[i];
        for(j=i-1; j>=0 && indeks[j]>pomoc; j--) 
        {                             /* pętla sprawdzająca każdy element od końca listy i układająca pojedyńcze */
            indeks[j+1]=indeks[j];    /* wartości, aż do momentu znalezienia wartości mniejszej, albo końca tablicy */
            tab[j+1]=tab[j];
        }                             /* operacje są wykonywane równolegle na obu tablicach, bo jest to sortowanie pośrednie */
        indeks[j+1]=pomoc;
        tab[j+1]=pomoc1;
    }


for(i=0; i<wymiar; i++)        /* wypisanie indeksów */
{
    printf("%d ",indeks[i]);
}

printf("\n");

for(i=0; i<wymiar; i++)      /* wypisanie odpowiadających znaków */
{
    printf("%c ",tab[indeks[i]]);  /* charakterystyczne wywołanie dla tablic indeksowanych pośrednio */
}

printf("\n");

return 0;
}