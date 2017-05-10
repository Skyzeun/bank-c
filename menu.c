#include "stdio.h"
#include "stdlib.h"

int main()
{
  // Menu primaire
  printf("================================\n");
  printf("==   Welcome to Kap's bank    ==\n");
  printf("================================\n");
  printf("==           Menu             ==\n");
  printf("================================\n");
  printf("==    1/ Gestion de compte    ==\n");
  printf("==    2/ Retrait              ==\n");
  printf("==    3/ Administration       ==\n");
  printf("================================\n\n");

  // Déclaration des variables
  int choixMenu = 0;
  int choixCompte = 0;
  int choixAdmin = 0;
  int montant = 0;

  while(choixMenu < 1 || choixMenu > 3)
  {
    // Demande à l'utilisateur de choisir une action
    printf("Choisisez une action -> ");
    scanf("%d", &choixMenu);

    puts("");

    // Switch principal
    switch (choixMenu)
    {
      case 1 :
      // Menu de gestion de compte
      printf("================================\n");
      printf("==      Gestion de compte     ==\n");
      printf("================================\n");
      printf("==      1/ Compte courant     ==\n");
      printf("==      2/ Compte epargne     ==\n");
      printf("==      3/ Retour             ==\n");
      printf("================================\n");

      puts("");

      // Demande à l'utilisateur de choisir une action 
      printf("Choisisez une action -> ");
      // Stock la variable pour le choix de l'utilisateur
      scanf("%d", &choixCompte);

      puts("");

        // Switch choix du Compte
        switch (choixCompte)
        {
          case 1 : // Affiche les détails du compte courant
            printf("================================\n");
            printf("==      Compte courant        ==\n");
            printf("================================\n");   
          break;

          case 2 : // Affiche les détails du compte epargne
            printf("================================\n");
            printf("==      Compte epargne        ==\n");
            printf("================================\n");
          break;

          /* case 3 :
          if (choixMenu = 3)
          {
          // code
          }
          break; */
        }

      break;

      case 2 :
        printf("================================\n");
        printf("==          Retrait           ==\n");
        printf("================================\n");
        printf("==     1/ Compte courant      ==\n");
        printf("==     2/ Compte epargne      ==\n");
        printf("==     3/ Retour              ==\n");
        printf("================================\n");

        puts("");

        printf("Quel compte? -> ");
        scanf("%d", &choixCompte);

        puts("");

        // Switch choix du compte
        switch (choixCompte)
        {
          case 1 : // Permet de retirer de l'argent dans le compte courant        
            printf("================================\n");
            printf("==        Compte courant      ==\n");
            printf("================================\n");
          break;

          case 2 : // Permet de retirer de l'argent sur le compte epargne
            printf("================================\n");
            printf("==        Compte epargne      ==\n");
            printf("================================\n");
          break;
        }
      break;

      case 3 :
        // Menu administrateur
        printf("================================\n");
        printf("==       Administration       ==\n");
        printf("================================\n");
        printf("==    1/ Liste client         ==\n");
        printf("==    2/ Modification client  ==\n");
        printf("==    3/ Suppression client   ==\n");
        printf("==    4/ Retour               ==\n");
        printf("================================\n");

        puts("");

        printf("Choisisez une action -> ");
        scanf("%d", &choixAdmin);

        puts("");

        // Switch choix de l'action administrateur
        switch (choixAdmin)
          {
            case 1 : // Affiche la liste des clients
              printf("================================\n");
              printf("==        Liste client        ==\n");
              printf("================================\n");
            break;

            case 2 : // Permet la modification d'information client
              printf("================================\n");
              printf("==     Modification client    ==\n");
              printf("================================\n");
            break;

            case 3 : // Permet de supprimer un client
              printf("================================\n");
              printf("==       Suppression client   ==\n");
              printf("================================\n");
            break;
          }
        break;
        }
  }

return 0;
}
