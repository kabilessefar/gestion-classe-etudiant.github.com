#include <stdio.h>
#include <stdlib.h>
#include"classe.h"

int main()
{
pNoeud l;
 int n=5;
 int cree=0;
 printf("1. creer une clase\n2.Ajouter un etudiant\n3.Afficher la liste des etudiant\n4.afficher les notes des etudiants\n5.afficher la moyenne de clase\n6.supprimer la clase\n7.Quitter\n");
 while(n!=0){
 printf("choisi un numero\n");
 scanf("%d",&n);
 switch(n)
 {  case 1: {l=creerclasse();printf("la liste est cree\n");cree=1;break;}
    case 2:{if(cree==0){printf("la classe n'est pas creer");}
    else {
        etud e;
    printf("saisir le numero de l'etudiant\n");
    scanf("%d",&e.num);
    printf("saisir le nom de l'etudiant\n");
    scanf("%s",e.nom);
    printf("saisir le prenom de l'etudiant\n");
    scanf("%s",e.prenom);
    printf("saisir la note d'exam\n");
    scanf("%f",&e.n_exam);
    printf("saisir la note de projet\n");
    scanf("%f",&e.n_projet);
    l=ajoutDebut(l,e);}
     break;}
    case 3:{afficher(l);break;}
    case 4:{affichernote(l);break;}
    case 5:{affichermoyen(l);break;}
    case 6:{l=supprimclasse(l);break;}
    case 7:exit(1);
    }
}
    return 0;
}
