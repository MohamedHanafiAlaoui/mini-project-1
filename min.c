# include <stdio.h>
#include <string.h>

typedef  struct lives
{
    char titre [100];
    char auteur [100];
    char Adresse [100];
    float prix;
    int quantite;
}live_n;

void yo_swap(int *p1 ,int *p2)
{
    int a;
    a = *p1;
    *p1 = *p2;
    *p2 = a;
}
void fyo_swap(float *p1 ,float *p2)
{
    float a;
    a = *p1;
    *p1 = *p2;
    *p2 = a;
}

void    ajouter(live_n live[100] , int *count);
void    afficher(live_n live[100], int *count);
void    Rechercher (live_n live[100],int *count);
void    update(live_n live[100],int *count);
void    Supprimer (live_n live[100], int *count);
void    afich();

int main ()
{
    live_n live[100] ;
    int count = 0;
    int *p_count=&count;
    int choix;

  while(1){
        afich();
        printf("Entee votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
               ajouter(live , p_count);
                printf("Count: %d\n", count);

                break;
            case 2:
                //printf("Count: %d\n", count);
               afficher(live , p_count);
                break;
            case 3:

                update( live , p_count);
                break;
            case 4:
                Supprimer(live,  p_count);
                break;
            case 5:
              //  Total(quantite, c);
                break;
            case 6:
                char stre[100];
                printf("Enter the titre: ");
                scanf("%s", stre);
               // Rechercher(titre ,auteur, prix, quantite, stre, c);
                break;
            default:
                printf("Default!");
        }
    }
}

void afich()
{
    printf("===========================\n");
    printf("1=>ajouter\n");
    printf("2=>afficher\n");
    printf("3=>update\n");
    printf("4=>Supprimer\n");
    printf("5=>Total\n");
    printf("6=>Rechercher\n");
    printf("===========================\n");
}


void  ajouter(live_n live[100], int *count) 
{   
    int y;
    int n;

    printf("ajoute 1 elment entre 0 et plus all namber 1 : ");
    scanf("%d", &y);
    
    switch (y)
    {
    case 0:
        printf ("titre : ");
        scanf ("%s", &live[*count].titre);
        printf ("auteur : ");
        scanf ("%s", &live[*count].auteur);
        printf ("prix : ");
        scanf ("%f", &live[*count].prix);
        printf ("quantite : ");
        scanf ("%d", &live[*count].quantite);
        *count+=1;
        break;
    case 1:
        int s;
        printf("enter namber element de ajete ");
        scanf("%d", &n);
        s = *count + n;
        for ( *count; *count < s; *count+=1)
        {
            printf ("titre  : ");
            scanf ("%s", &live[*count].titre);
            printf ("auteur : ");
            scanf ("%s", &live[*count].auteur);
            printf ("prix : ");
            scanf ("%f", &live[*count].prix);
            printf ("quantite : ");
            scanf ("%d", &live[*count].quantite);  
        }

        
        break;
    
    default:
        break;
    }
}

void  afficher(live_n live[100], int *count) 
{
    for (int i = 0; i < *count; i++)
    {
            printf("\n------------------------------\n");
            printf ("titre  :  %s",live[i].titre);
            printf ("auteur : %s",live[i].auteur);
            printf ("prix : %.2f dh", live[i].prix);
            printf ("quantite : %d",live[i].quantite);
    }
}

void Rechercher (live_n live[100],int *count)
{
    int r;
    int n = 0;
    int i, j;
    int y;

    afficher(live , count);

    char stre[100];
    printf("Enter the titre: ");
    scanf("%s", stre);
    for (int i = 0; i < *count; i++)
    {
        if (strcmp(live[i].titre ,stre) == 0)
        {
            // printf ("titre  : %s",titre[i] );
             r = i;
             n = 1;
             break;
        }
    }
    if (n == 1)
    {
            printf("\n------------------------------\n");
            printf ("titre  :  %s",live[r].titre);
            printf ("auteur : %s",live[r].auteur);
            printf ("prix : %.2f dh", live[r].prix);
            printf ("quantite : %d",live[r].quantite);
    }else
    {
        printf("dlklfd,fld,fl");
    }
    
}

void update(live_n live[100],int *count)
{
    afficher(live , count);

    char stre[100];
    printf("Enter the titre: ");
    scanf("%s", stre);

    int r;
    int n = 0;
    int chois;
    for (int i = 0; i < *count; i++)
    {
        if (strcmp(live[i].titre ,stre) == 0)
        {
            // printf ("titre  : %s",titre[i] );
             r = i;
             n = 1;
             break;
        }
    }
    if (n == 1)
    {
        printf("============enter lechoi de mofifer ============\n 1 => titre \n 2 => quantite \n 3 => prix \n 4 => tous les champ \n");
        scanf("%d",&chois);
        switch (chois)
        {
        case 1:
            printf ("titre : ");
            scanf ("%s", &live[r].titre);
            break;
        case 2:
            printf ("quantite : ");
            scanf ("%d", &live[r].quantite);
            break;
        case 3:
            printf ("prix : ");
            scanf ("%f", &live[r].prix);
            break;
        case 4:
            printf ("titre : ");
            scanf ("%s", &live[r].titre);
            printf ("auteur : ");
            scanf ("%s", &live[r].auteur);
            printf ("prix : ");
            scanf ("%f", &live[r].prix);
            printf ("quantite : ");
            scanf ("%d", &live[r].quantite);
            break;
        default:
            break;
        }

    }else
    {
        printf("donc ne est pas recherche %s",stre);
    }
    
    
}

// void Total(int quantite[10],int *count)
// {
//     int s;

//     s = 0;
//     for (int i = 0; i < count; i++)
//     {
//           s +=quantite[i];
//     }
//     printf ("le Nombre Total de Livre est : %d\n",s);
// }

void Supprimer (live_n live[100],int *count)
{
    int r;
    int n = 0;
    int i, j;
    int y;

    afficher(live , count);

    char stre[100];
    printf("Enter the titre: ");
    scanf("%s", stre);

    for (i = 0; i < *count; i++) 
    {
        if (strcmp(live[i].titre ,stre) == 0)
        {
            r = i;
            n = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("onter 1 on suprimer ");
        scanf("%d",&y);
        if (y == 1)
        {
            for (j = i; j < *count - 1; j++)
            {
                printf("\nyes to suprime\n");
                strcpy(live[j].titre, live[j + 1].titre);
                strcpy(live[j].auteur,live[j+1].auteur);
                fyo_swap(&live[j].prix,&live[j + 1].prix);
                yo_swap(&live[j].quantite,&live[j + 1].quantite);
            }
        }
    }
    else
    {
        printf("non de suprime ");
    }
    
}
    
