#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char chaine[20];
    unsigned int i = 0, etat = 0;

    while (1)
    {
        switch (etat)
        {
        case 0:
        {
            if (chaine[i] == '0')
            {
                etat = 1;
                i++;
            }
            else if (chaine[i] == '1' || chaine[i] == '2')
            {
                etat = 2;
                i++;
            }
            else if (chaine[i] == '3')
            {
                etat = 3;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 1:
        {
            if (chaine[i] >= '1' && chaine[i] <= '9')
            {
                etat = 4;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 2:
        {
            if (chaine[i] >= '0' && chaine[i] <= '9')
            {
                etat = 4;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 3:
        {
            if (chaine[i] == 0)
            {
                etat = 4;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 4:
        {
            if (chaine[i] == '/')
            {
                etat = 5;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 5:
        {
            if (chaine[i] == '0')
            {
                etat = 6;
                i++;
            }
            else if (chaine[i] == '1')
            {
                etat = 7;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 6:
        {
            if (chaine[i] >= '1' && chaine[i] <= '9')
            {
                etat = 8;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 7:
        {
            if (chaine[i] >= '0' && chaine[i] <= '2')
            {
                etat = 8;
                i++;
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        case 8:
        {
            if (i == strlen(chaine))
            {
                printf("date valide !");
                exit(0);
            }
            else
            {
                printf(" \n errour !");
                exit(1);
            }
        }
        }
    }
}