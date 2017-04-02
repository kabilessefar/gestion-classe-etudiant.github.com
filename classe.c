#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"classe.h"
 pNoeud creerclasse()
 {pNoeud l=NULL;
   return l;
 }
pNoeud ajoutDebut(pNoeud l,etud E)
{
   pNoeud p=malloc(sizeof(noeud));
   p->info=E;
   p->lien=l;
   return p;
}
void afficher(pNoeud l)
{ pNoeud p=l;
  while(p!=NULL)
  { printf("%d ",p->info.num);
    printf("%s ",p->info.nom);
    printf("%s ",p->info.prenom);
    printf("%f ",p->info.n_exam);
    printf("%f \n",p->info.n_projet);
    p=p->lien;
  }
  printf("\n");
}

void affichernote(pNoeud l)
{ pNoeud p=l;
  while(p!=NULL)
  { printf("note: exam   projet\n");
    printf("%f ",p->info.n_exam);
    printf("%f\n",p->info.n_projet);
    p=p->lien;
  }
  printf("\n");
}
void affichermoyen(pNoeud l)
{ pNoeud p=l;
  float som=0,i=0;
  while(p!=NULL)
  { i++;
    som+=(l->info.n_exam+l->info.n_projet)/2;
    p=p->lien;
  }
  printf("la moyenne de classe est:%f",som/i);
  printf("\n");
}
pNoeud supprimclasse(pNoeud l)
{ pNoeud p=l;
    while(p!=NULL)
    { free(p);
      p=p->lien;
        }
        return l;
}
