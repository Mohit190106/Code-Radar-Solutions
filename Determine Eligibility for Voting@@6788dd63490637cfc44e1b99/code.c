#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=18){
        printf("Eligible");
    }
    else if(x<18){
        printf("Not ELigible");
    }
    else{
        printf("");
    }
    return 0;
}