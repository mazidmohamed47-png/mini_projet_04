#include <stdio.h>
#include <stdlib.h>
#define max_etudiants 1000
#define max_cours 1000


typedef struct {

    int ID ;
    char nom [30] ;
    char prenom [30] ;
    int age ;
    float moyenne ;

}etudiants;


typedef struct {

    int code ;
    char nom[30] ;
    int credits ;
    float note ;

}cours;

etudiants tab_etudiants[max_etudiants];
int nombre_etudiants=0;

cours tab_cours[max_cours];
int nombre_cours=0;


void Ajouter_des_etudiants(){

int i,n;
int debut;

do {
        debut=nombre_etudiants;
    printf("veuillez entrer le nombre de etudiants : ");
    scanf("%d",&n);

    if( (nombre_etudiants+n) > max_etudiants || n<= 0)
    printf("Erreur ! Nombre invalide. Veuillez reessayer.\n");
}
while((nombre_etudiants+n) > max_etudiants || n<=0);

for (i=debut;i<debut+n;i++){
    printf("Etudiants : %d\n",i+1);

    printf("veuillez entrer ID de etudiant : ");
    scanf("%d",&tab_etudiants[i].ID);

    printf("veuillez entrer le nom de etudiant : ");
    scanf("%s",tab_etudiants[i].nom);

    printf("veuillez entrer le prenom de etudiant : ");
    scanf("%s",tab_etudiants[i].prenom);

    printf("veuillez entrer l_Age de etudiant : ");
    scanf("%d",&tab_etudiants[i].age);

    printf("veuillez entrer le moyenne de etudiant : ");
    scanf("%f",&tab_etudiants[i].moyenne);

   }

   nombre_etudiants+=n; //puor mesajeur le total

}

void Ajouter_des_cours (){

    int i,n;
    int debut;

do {
    debut = nombre_cours;

    printf("veuillez entrer le nombre des cours : ");
    scanf("%d",&n);

    if( (nombre_cours+n) > max_cours || n<= 0)
    printf("Erreur ! Nombre invalide. Veuillez reessayer.\n");
}
while((nombre_cours+n) > max_cours || n<=0);

    for (i=debut;i<debut+n;i++){

        printf(" cours : %d\n",i+1);

        printf("veuillez entrer le code :  ");
        scanf("%d",&tab_cours[i].code);

        printf("veuillez entrer le nom :  ");
        scanf("%s",tab_cours[i].nom);

        printf("veuillez entrer le credits :  ");
        scanf("%d",&tab_cours[i].credits);

        printf("veuillez entrer le note :  ");
        scanf("%f",&tab_cours[i].note);

    }
  nombre_cours+=n;
}

void Afficher_la_liste_des_etudiants(){

int i;

if (nombre_etudiants==0)

    printf(" !! la liste des etudiants est vied !!\n");

    else {

    printf("la liste des etudiants : \n");

for (i=0;i<nombre_etudiants;i++){

    printf("\n==========================\n");

    printf("Etudiants : %d\n",i+1);

    printf("ID        : %d\n",tab_etudiants[i].ID);

    printf("nom       : %s\n",tab_etudiants[i].nom);

    printf("prenom    : %s \n",tab_etudiants[i].prenom);

    printf("Age       : %d \n",tab_etudiants[i].age);

    printf("moyenne   : %.2f\n",tab_etudiants[i].moyenne);

}

    }

}
void Afficher_la_liste_des_cours(){
  int i;

  if (nombre_cours==0){

    printf(" !! la liste des etudiants est vied !!\n");
  }
    else {

    printf("==========================\n");

    printf("la liste des cours : \n");
  for (i=0;i<nombre_cours;i++){

    printf(" coures : %d \n",i+1);

    printf("code : %d \n",tab_cours[i].code);

    printf("nom : %s \n",tab_cours[i].nom);

    printf("credits : %d \n",tab_cours[i].credits);

    printf("note : %.2f \n",tab_cours[i].note);

  }
}

}

int main()
{
    int choix;
 do {
    printf("============Menu==========\n");

    printf("Ajouter des etudiants  : 1\n");

    printf("Ajouter des cours      : 2\n");

    printf("Afficher les etudiants : 3\n");

    printf("Afficher les cours     : 4\n");

    printf("Quitter                : 5 \n");

    printf("Votre choix            : ");
    scanf("%d", &choix);

 switch (choix){

  case 1 :

    Ajouter_des_etudiants();
    break;

  case 2 :

    Ajouter_des_cours ();
    break;

  case 3 :

    Afficher_la_liste_des_etudiants();
    break;

  case 4 :

    Afficher_la_liste_des_cours();
    break;

  case 5 :
    printf("===========================\n");
    printf("\tAu revoir ! \n");
    break;

  default  : printf("Choix invalide!\n");

    }

    }
    while (choix!=5);

    return 0;
}
