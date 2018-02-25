#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *plik_we = fopen(argv[2], "r");
    FILE *plik_wy = fopen(argv[3], "w");
    char linia[255];
    int i,j;
    int licznik;

    while(fgets(linia, sizeof(linia), plik_we))
    {
        licznik =0;
        for(i=0; i<strlen(argv[1]); i++)
        {
            for (j=0; j<strlen(linia); j++)
            {
                if (argv[1][i] == linia[j])
                {
                    licznik++;
                    break;
                }
            }
        }
        if(licznik > 0)
        {
            fprintf(plik_wy, "%s", linia);
        }
    }

    fclose(plik_we);
    fclose(plik_wy);
    return 0;
}

/*
Opracować program wczytujący z pliku dane tekstowe i zapisujący do drugiego pliku tylko liczby
zawierając cyfry z zakresu podanego w wierszu poleceń podczas uruchomienia programu. Można
założyć, że dane będą poprawne. Przykładowo uruchomienie programu:
$ prog 138 plik_we.txt plik_wy.txt
oraz zawartości pliku plik_we.txt:
2233
44
222
112123
4997
556
777
8
spowoduje zapisanie w plik_wy.txt tylko liczb zawierających cyfry 1, 3 i 8:
2233
112123
8
*/
