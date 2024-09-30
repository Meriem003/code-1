#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("veuillez entre la velaur de x : ");
    scanf("%d",&x);
    if(x%2==0){ 
        printf("%d un nombre paire",x);
    }else{
        printf("%d un nombre impaire",x);
    }
return 0;
}