#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *plik;
    char szuk[] = "abc";
    int ile = 3;
    char linia[255];

    plik = fopen("plik.txt","r");

    while (fgets(linia, sizeof(linia),plik))
    {
        int licznik = 0;
        char *tmp = linia;

        while ((tmp = strstr(tmp, szuk)))
        {
            tmp = tmp + strlen(szuk);
            licznik++;
        }
        if (licznik == ile)
        {
            printf("%s\n", linia);
        }
    }

    fclose(plik);
    return 0;
}
