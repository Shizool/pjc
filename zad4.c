#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *plik;
    int i;
    int licznik = 1;
    int ile = argc-2;
    char linia[255];
    char wejscie[255];

    plik = fopen(argv[1], "r");

    for(i=0; i<ile; i++)
    {
        wejscie[i]=atoi(argv[2+i]);
    }


    while(fgets(linia, sizeof(linia),plik))
    {
        for(i=0; i<ile; i++)
        {
            if(wejscie[i] == licznik && wejscie[i+1] == strlen(linia)-1)
            {
                printf("%s",linia);
            }
            i++;
        }
        licznik++;
    }

    fclose(plik);
    return 0;
}

/*
Opracować program wczytujący z wiersza poleceń nazwę pliku i parami liczby oddzielone spacją
i wyświetlający na ekranie wiersze z tego pliku o podanych numerach, jeśli liczba znaków w tym
wierszu jest równa drugiej liczbie pary.. Można założyć, że wszystkie wprowadzane dane będą
poprawne. Przykładowo dla wiersza poleceń: $ prog plik_we.txt 1 2 2 5 3 10 5 1 oraz zawartości pliku
plik_we.txt postaci:
aa
bb
cccdddeeef
dd
e
faaf
program powinien wyświetlić:
aa
cccdddeeef
e
*/
