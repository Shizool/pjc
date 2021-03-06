#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *plik_we = fopen("plik_we.txt", "r");
    FILE *plik_wy = fopen("plik_wy.txt", "w");
    char linia[128];
    int i;
    int q;

    while(fgets(linia,sizeof(linia),plik_we))
    {
        q = 0;
        if(strlen(linia)-1<=atoi(argv[1]))
        {
            for (i=0; i<strlen(linia)-1;i++)
                {
                    if(isdigit(linia[i]))
                    {
                        q++;
                    }
                }
            if (q == strlen(linia)-1)
            {
                fprintf(plik_wy, "%s", linia);
            }
        }
    }

    fclose(plik_we);
    fclose(plik_wy);
    return 0;
}

/*
Opracować program wczytujący z pliku tekstowego wiersze i zapisujący do drugiego pliku te wiersze,
które zawierają tylko cyfry a ich długość nie jest większa niż wartość podana jako argument
uruchomienia programu. Można założyć, że wszystkie dane będą poprawne, a podawana długość nie
będzie większa niż 128.
*/
