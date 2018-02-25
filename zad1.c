#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char wejscie [255];
    char deli[] = " ,.-";
    char *szuk = argv[1];
    int liczba = atoi(argv[2]);
    char *tmp;
    int i;
    int licznik;
    int abandon;

    scanf("%[^\n]", wejscie);

    tmp = strtok(wejscie, deli);

    while (tmp != NULL)
    {
        licznik = 0;
        abandon = 0;
        for (i=0; i < strlen(tmp); i++)
        {
            if (isdigit(tmp[i]))
            {
                abandon ++;
                break;
            }

            if (tmp[i]==*szuk)
            {
                licznik++;
            }
        }

        if (licznik == liczba && abandon == 0)
        {
            printf("%s\n", tmp);
        }

        tmp = strtok(NULL, deli);
    }




    return 0;
}
