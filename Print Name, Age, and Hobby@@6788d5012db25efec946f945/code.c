#include <stdio.h>
int main(){
    char x[10];
    int y;
    char z[10];
    scanf("%s %d %s",x,&y,z);
    printf("Name: %s",x);
    printf("Age: %d",&y);
    printf("Hobby: %s",z);
    return 0;
}