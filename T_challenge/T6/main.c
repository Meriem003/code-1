#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i,res;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    int T[N];
    for(i=0;i<N;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    int F, M;
    printf("veuillez entre facteur : ");
    scanf("%d",&F);
    
    for(i=0;i<N;i++){
        res=F*T[i];
        printf("resultat : %d \n",res);
    }

}