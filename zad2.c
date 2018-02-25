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

/*
Opracować program wczytujący ze standardowego wejścia ciągi znaków oddzielone spacją
i wyświetlający te te ciągi, które zawierają zadany ciąg znaków (podawany w wierszu poleceń
programu). Można założyć, że wszystkie wprowadzane dane będą poprawne.
Przykładowo dla wiersza poleceń $ prog abb i znaków na standardowym wejściu:
ababbssh shhhh aa abbbb ssss dwkkw aaa oeiufffll
abbbb aaa
ababssh sbbbb ssss dwkkw aaa oeiufffll
aass abb ddd
program powinien wyświetlić:
ababbssh abbbb abbbb abb
*/
