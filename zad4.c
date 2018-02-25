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
