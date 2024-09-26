#include <stdio.h>

int main(){

    int n,impair = 1;

    printf("Donner un nombre : ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n;i++ ){
        printf("%d ",impair);
        impair += 2;
    }

    return 0;
}