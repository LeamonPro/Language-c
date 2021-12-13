#include <stdio.h>

int saisie(int x){
printf("donner l\'element a supprimer :");
scanf("%d",&x);
return x;}
void remplir(int t[],int n ,int *i){
    if (n!=0){
        printf("t[%d]= ",*i);
        scanf("%d",&t[0]);
        (*i)++;
        remplir(t+1,n-1,i);
    }
}
void supp(int *t ,int n,int x,int *a){
    if (n!=0){
            if(t[0]==x){
                for(int i=0;i<n-1;i++)
                    t[i]=t[i+1];
            (*a)--;
            supp(t,n-1,x,a);}

    else
        supp(t+1,n-1,x,a);
}
}
void affiche(int t[], int n ){
    for (int i=0;i<n;i++)
        printf("%d \t",t[i]);
}

void main()
{
    int t[10],n,j,x,a,k,g;
    printf("donner la taille du tableau ");
    scanf("%d",&n);
    a=n;
    k=0;
    remplir(t,n,&k);
    x=saisie(x);
    supp(t,n,x,&a);
    affiche(t,a);
}
