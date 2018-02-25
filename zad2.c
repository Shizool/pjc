#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char wejscie[255];
    char deli[]=" \n";
    char *szuk=argv[1];
    char *tmp;

    scanf("%[^0]", wejscie);

    tmp = strtok(wejscie, deli);

    while(tmp != NULL)
    {
        if (strstr (tmp, szuk) != NULL)
        {
            printf ("%s ", tmp);
        }

        tmp = strtok(NULL, deli);
    }

    return 0;
}
