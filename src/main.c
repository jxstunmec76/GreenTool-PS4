
#include <stdio.h>

static void afficher_menu(void)
{
    printf("\n");
    printf("================================\n");
    printf("       GREENTOOL PS4 v1.0\n");
    printf("================================\n");
    printf("\n");
    printf("  [1] Accueil\n");
    printf("  [2] Explorateur de fichiers\n");
    printf("  [3] Informations systeme\n");
    printf("  [4] Stockage\n");
    printf("  [5] FTP\n");
    printf("  [6] Parametres\n");
    printf("  [0] Quitter\n");
    printf("\n");
    printf("================================\n");
    printf("Choisissez une rubrique : ");
}

int main(void)
{
    int choix = -1;

    while (choix != 0)
    {
        afficher_menu();

        if (scanf("%d", &choix) != 1)
        {
            printf("\nEntree invalide.\n");
            return 1;
        }

        switch (choix)
        {
            case 1:
                printf("\nBienvenue dans GreenTool PS4 !\n");
                break;

            case 2:
                printf("\nExplorateur : en preparation.\n");
                break;

            case 3:
                printf("\nInformations systeme : en preparation.\n");
                break;

            case 4:
                printf("\nStockage : en preparation.\n");
                break;

            case 5:
                printf("\nFTP : en preparation.\n");
                break;

            case 6:
                printf("\nParametres : en preparation.\n");
                break;

            case 0:
                printf("\nFermeture de GreenTool.\n");
                break;

            default:
                printf("\nChoix invalide.\n");
                break;
        }
    }

    return 0;
}
