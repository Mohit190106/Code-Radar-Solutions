#include <stdio.h>
int main(){
    char x[10];
    char y;
    char z[10];
    scanf("%s %d %s",x,&y,z);
    printf("Name: %s",x);
    printf("\nAge: %s",&y);
    printf("\nHobby: %s",z);
    return 0;
}