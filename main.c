#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char wejscie[255];
    int liczba = 0; // licznik ilosci liczb w programie
    int znak = 0;   // licznik ilosci znakow ASCII w programie
    char delimeter[] = " "; // usuwamy spacje
    char *tmp;
    int i =0; //pomocnicza do petli for
    int j = 0; // pomocnicza do wyjscia z petli while

    printf("Podaj ciag max 255 znakow, zakoncz zliczanie przez XYZ\n");
    scanf("%[^\n]", wejscie);

    tmp = strtok(wejscie, delimeter);

    while (tmp != NULL && j != 1)
    {
        for (i=0;i<strlen(tmp);i++)
        {
            if (tmp[i]=='X' && tmp[i+1] == 'Y' && tmp[i+2] == 'Z') // warunek wyjscia przy 3 znakach konczacych
            {
                j = 1;
            }

            if (isdigit(tmp[i])) // zliczanie czy liczba, jesli nie to znak
            {
                liczba++;
            }
            else
            {
                znak++;
            }
        }

        tmp = strtok(NULL, delimeter);
    }
        printf ("Ilosc liter: %d\n", liczba);
        printf ("Ilosc znakow ASCII: %d\n", znak-3); // usuwamy 3 znaki aby pozbyc sie koncowego XYZ

        return 0;
}
