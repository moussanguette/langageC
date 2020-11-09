#include<stdio.h>
/*
    un programme qui veirfie si l'element saisi au clavier est dans le tableau
*/
int main(){
    int tab[]={32,1,4,56},n,i,r=0;
    printf("donner la valeur a rechercher :\n");
    scanf("%d",&n);//lire la valeur a rechercher
    for (int i = 0; i < 4; i++)// parcourir le tableau
    {
        if (n==tab[i])// verifier si la valeur saisir est dans le tableau
        {
            printf("la valeur %d est dans le tableau a la position %d \n",n,i+1);
            r++; // on incremente la valeur de r si l'element est trouvé
        }
            
    }
    // si la r n'est pas incrementé alors l'element n'est pas dans le tableau
    if (r==0)
    {
        printf("%d n'est pas dans le tableau !\n",n);
    }
    
}