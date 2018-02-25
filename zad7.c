#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char wejscie[255];
    int liczba = 0;
    int znak = 0;
    char delimeter[] = " ";
    char *tmp;
    int i =0;
    int j = 0;

    printf("Podaj ciag max 255 znakow, zakoncz zliczanie przez XYZ \n");
    scanf("%[^\n]", wejscie);

    tmp = strtok(wejscie, delimeter);

    while (tmp != NULL && j != 1)
    {
        for (i=0;i<strlen(tmp);i++)
        {
            if (tmp[i]=='X' && tmp[i+1] == 'Y' && tmp[i+2] == 'Z')
            {
                j = 1;
            }

            if (isdigit(tmp[i]))
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
        printf ("Ilosc znakow ASCII: %d\n", znak-3);

        return 0;
}

/*
Opracować program wczytujący ze standardowego wejścia znaki aż do napotkania 3 znaków końca
wiersza z rzędu - markera końca wprowadzanych znaków. Po wykryciu tego markera program powinien
wyświetlać podsumowanie zawierające liczbę cyfr danego typu, jakie znalazły się w strumieniu. Można
założyć, że wszystkie dane będą poprawne.
*/
