typedef struct{
    int num;
    char nom[10];
    char prenom[10];
    float n_exam;
    float n_projet;
    }etud;
typedef struct noeud_S *pNoeud;
typedef struct noeud_S{
    etud info;
    pNoeud lien;
 }noeud;
 pNoeud ajoutDebut(pNoeud,etud);
 void afficher(pNoeud);
 void affichernote(pNoeud);
 void affichermoyen(pNoeud);
 pNoeud supprimclasse(pNoeud);
 pNoeud creerclasse();
