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
