#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[20];
    unsigned int i = 0, etat = 0;
    int compeutr = 0;
    printf(" donner une chaine");
    scanf("%")
    while (1)
    {
        switch (etat)
        {
        case 0:
        {
            if (chaine[i] == 'a')
            {

                etat = 1;
                i++;
            }
            else
            {
                printf(" \n errur !");
                exit(1);
            }
            break;
        }
        case 1:
        {
            if (i == strlen(chaine))
            {
                printf("valide avec compeutr de b = %d", compeutr);
                exit(0);
            }
            else if (chaine[i] == 'a')
            {
                etat = 3;
                i++;
            }
            else if (chaine[i] == 'b')
            {
                etat = 2;
                compeutr++;
                i++;
            }
            else
            {
                printf(" Errour !");
                exit(1);
            }
            break;
        }
        case 2:
        {
            if (chaine[i] == 'a')
            {
                etat = 3;
                i++;
            }
            else if (chaine[i] == 'b')
            {
                compeutr++;
                i++;
            }
            else
            {
                prnitf("\nerrour!");
                exit(1);
            }
            break;
        }
        case 3:
        {
            if (i == strlen(chaine))
            {
                printf(" \n valide avec nombre de b = %d", compeutr);
                exit(0);
            }
            else
            {
                printf("\n errour !");
                exit(1);
            }
        }
        }
    }
}