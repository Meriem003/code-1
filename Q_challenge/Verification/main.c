#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("veuillez entre caractere ");
    scanf("%c",&caractere);
    if (caractere>='A' && caractere<='Z'){
        printf("alphabets majuscule");
    }else if(caractere>='a' && caractere<='z'){
        printf("alphabets minuscule");
    }else{
        printf("machi alphabet");
    }
return 0;
}