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

/*
Opracować program wczytujący ze standardowego wejścia znaki i zapisujący do pliku wiersze, jeśli ich
długość będzie z zakresu długości podanej w trakcie uruchomienia programu. Można założyć, że
wprowadzane dane będą poprawne. Przykładowo uruchomienie programu: $ prog 10-20 plik_wy.txt
spowoduje zapisanie w plik_wy.txt wierszy o długości co najmniej 10 znaków i nie dłuższe niż 20
znaków
*/
