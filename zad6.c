#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *plik = fopen(argv[2], "w");
    int mini;
    int max;
    int j=0;
    char pomin[]="-";
    char deli[]="\n";
    char *tmp;
    char wejscie[255];

    tmp = strtok(argv[1],pomin);
    while(tmp != NULL)
    {
        if (j==0)
        {
            mini = atoi(tmp);
        }
        if (j==1)
        {
            max = atoi(tmp);
        }
        j++;
        tmp = strtok(NULL,pomin);
    }

    scanf("%[^0]", wejscie);

    tmp = strtok(wejscie, deli);

    while (tmp != NULL)
    {
        if (strlen(tmp) >= mini && strlen(tmp) <= max)
        {
            fprintf(plik, "%s\n", tmp);
        }

        tmp = strtok(NULL, deli);
    }

    fclose(plik);
    return 0;
}
