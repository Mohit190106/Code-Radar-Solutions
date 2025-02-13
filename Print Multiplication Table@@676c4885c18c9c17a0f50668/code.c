#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=n;i<=1000;i++){
        if(i%n==0){
            printf("%d \n",i);
        }
    }
    return 0;
}