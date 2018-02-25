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
