#include<stdio.h>
int main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=n;i<=n*100;i++){
        if(i%n==0){
            printf("%d/n",n*i=i);
        }
    }
    return 0;
}