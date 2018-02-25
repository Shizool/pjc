#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *plik = fopen("plik.txt", "w");
    char wejscie[255];
    char *tmp;
    char deli[] = " ";
    int ile;
    int i;

    scanf("%[^\n]", wejscie);

    tmp = strtok(wejscie, deli);

    while(tmp != NULL)
    {
        ile = atoi(tmp);

        for (i=0; i<ile; i++)
        {
            fprintf(plik, "%s", argv[1]);
        }

        fprintf(plik,"\n");

        tmp = strtok(NULL, deli);
    }

    fclose(plik);
    return 0;
}

/*
Opracować program wczytujący ze standardowego wejścia liczby oddzielone spacją (do napotkania
znaku końca wiersza) i zapisujący do zadanego pliku tekstowe ciągi znaków, będących
zwielokrotnieniem ciągu przekazanego w wierszu pleceń, przy czym liczba wierszy pliku musi
odpowiadać ilości liczb wprowadzonych przez standardowe wejście. Można założyć, że wszystkie dane
będą poprawne. Przykładowo dla uruchomienia programu $ prog aabbcc i snaków na wejściu:
1 2 1 3 2 1 1
*/
