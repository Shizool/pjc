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

/*
Opracować program wczytujący z pliku wiersze i wyświetlający te, które zawierają zadaną liczbę grup
liter danego typu. Można założyć, że wszystkie wprowadzane dane będą poprawne. Przykładowo dla
zadanej grupy liter abc i liczby wynoszącej 3 oraz znaków w pliku:
abcababcabca
shshsk
wwwl llsd djj
abcb ca dabcbaa jss abc
klja hhkla hahh ;a; habchhs www hajhhj
program powinien wyświetlić:
abcababcabca
abcb ca dabcbaa jss abc
*/
