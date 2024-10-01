#include <stdio.h>
#include <stdlib.h>

void fact(){
    int N,i,F;
    printf("veuillez entre la valeur de x = ");
    scanf("%d",&N);
    
    if(N=0){
        printf("factorielle = 1");
    }else{
        for(i=N-1;i<1;i++){
            F=N*(N-1);
        }
        printf("factorielle = %d",F);
    } 
}
int main(){
    fact();
    return 0;
}