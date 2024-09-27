#include <stdio.h>

int main(){
     int n, i; 
     int R = 0;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        R =R+i;
    }
    printf("Result est : %d",R);
    return 0;
}