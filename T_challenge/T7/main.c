#include <stdlib.h>
#include <stdio.h>

int main(){
    int N, i, j, X;
    printf("veuillez entre la valeur de N : ");
    scanf("%d",&N);
    int T[N];
    for(i=0;i<N;i++){
        printf("T[%d]=  ",i);
        scanf("%d,&T[i]");
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if (T[i]>T[j]){
            X=T[i];
            T[i]=T[j];
            T[j]=X;
            }        
        }
    }
    printf("les elements de tableau\n");
    for(i=0;i<N;i++){
    printf("%d",T[i]);
    }
}