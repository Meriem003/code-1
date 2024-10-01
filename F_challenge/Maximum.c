#include <stdio.h>
#include <stdlib.h>

void MAX(){
    int x, y;
    printf("veuillez entre la valeur de x = ");
    scanf("%d",&x);
    printf("veuillez entre la valeur de y = "); 
    scanf("%d",&y);
    if(x>y){
        printf("le maximum= %d",x);
    }else{
        printf("le maximum = %d",y);
    }
    
}
int main(){
    MAX();
    return 0;
}