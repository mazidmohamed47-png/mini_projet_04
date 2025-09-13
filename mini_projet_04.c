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
int nomber_cours=0;


void Ajouter_des_etudiants(){

int i;

do {
    printf("veuillez entrer le nombre de etudiants : ");
    scanf("%d",&nombre_etudiants);
    if(nombre_etudiants > max_etudiants || nombre_etudiants <= 0)
    printf("Erreur ! Nombre invalide. Veuillez reessayer.\n");
}
while(nombre_etudiants > max_etudiants || nombre_etudiants<=0);

for (i=0;i<nombre_etudiants;i++){
    printf(" Etudiants : %d\n",i+1);

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
};

void Ajouter_des_cours (){
    int i;
    printf("veuillez entrer les nomber des cours : ");
    scanf("%d",&nomber_cours);

    if (nomber_cours>50)

        printf("veuillez entrer un nomber mois de 50");
    else if (nomber_cours<=50){
    for (i=0;i<nomber_cours;i++){
        printf(" cours %d",i+1);

        printf("veuillez entrer le code :  ");
        scanf("%d",&tab_cours[i].code);

        printf("veuillez entrer le nom :  ");
        scanf("%s",tab_cours[i].nom);

        printf("veuillez entrer le credits :  ");
        scanf("%d",&tab_cours[i].credits);

        printf("veuillez entrer le note :  ");
        scanf("%f",&tab_cours[i].note);

    }
  }
};

void Afficher_la_liste_des_etudiants(){

int i;

    printf("la liste des etudiants: \n");

for (i=0;i<nombre_etudiants;i++){

    printf("\n=================================\n");

    printf("Etudiants : %d\n",i+1);

    printf("ID : %d\n",tab_etudiants[i].ID);

    printf("nom : %s\n",tab_etudiants[i].nom);

    printf("prenom : %s \n",tab_etudiants[i].prenom);

    printf("Age : %d \n",tab_etudiants[i].age);

    printf("moyenne : %f\n",tab_etudiants[i].moyenne);

}

};
void Afficher_la_liste_des_cours(){
int i;

printf("la liste des cours : ");
if (nomber_cours<=50){
for (i=0;i<nomber_cours;i++){

    printf(" coures : %d \n",i+1);

    printf("code : %d \n",tab_cours[i].code);

    printf("nom : %s \n",tab_cours[i].nom);

    printf("credits : %d \n",tab_cours[i].credits);

    printf("note : %f \n",tab_cours[i].note);

}
}
else if (nomber_cours>50)

    printf("le snomber des cour est tre gant veuiller entrer les nomber des cour");

    else
        printf(" !!Erreur!! le nomber tre petit  ");

};









int main()
{
    int choix;
 do {
    printf("==========Menu==========\n");

    printf("Ajouter des etudiants : 1\n");

    printf("Ajouter des cours : 2\n");

    printf("Afficher les etudiants : 3\n");

    printf(" Afficher les cours : 4\n");

    printf("Quitter : 5 \n ");

     printf("Votre choix : ");
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

  case 5 : printf(" Au revoir ! \n");
    break;

  default  : printf("Choix invalide!\n");

    }

    }
    while (choix!=5);

    return 0;
}
