#include<stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if(y==1 && x>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}