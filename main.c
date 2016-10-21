#include <stdio.h>
#include <stdlib.h>

/*
ALGORITHME : Tp-carre
//BUT Tracer un rectangle en fonction des dimensions données par l'utilisateur
/ENTREE La longueur et la largeur du rectangle
//SORTIE Un rectangle avec les dimensions demandées, avec le contour formé d'un caractère et rempli d'un autre caractère

Var : long:entier
      larg : entier
      i:entier
      j:entier


DEBUT
    ECRIRE "Veuillez saisir la longueur de votre rectangle"
    LIRE long
    ECRIRE "Veuillez saisir la largeur de votre rectangle"
    LIRE larg
    POUR i de 1 à long FAIRE
    DEBUT
        POUR j de 1 à larg FAIRE
        DEBUT
                SI (i=1) OU (i=larg) OU (j=1) OU (j=long) ALORS
                DEBUT
                    ECRIRE "*"
                FIN
                SINON
                    ECRIRE "+"
                FINSI
                j=j+1
        FINPOUR
        i=i+1
    FINPOUR
FIN

*/


int main()
{
//BUT Tracer un rectangle en fonction des dimensions données par l'utilisateur
//ENTREE La longueur et la largeur du rectangle
//SORTIE Un rectangle avec les dimensions demandées, avec le contour formé d'un caractère et rempli d'un autre caractère


    int lg=0;
    int larg=0;
    int i=0;
    int j=0;

    printf("Veuillez saisir la longueur de votre rectangle\n");
    scanf("%d",&lg);
    printf("Veuillez saisir la largeur de votre rectangle\n");
    scanf("%d",&larg);
    for(i=0;i<=lg;i++){
        for(j=0;j<=larg;j++){
        if (i==0 || i==lg || j==0 || j==larg){

            printf("*");
        }else{
            printf("+");

            }
        }
        printf("\n");
    }


    return 0;
}
