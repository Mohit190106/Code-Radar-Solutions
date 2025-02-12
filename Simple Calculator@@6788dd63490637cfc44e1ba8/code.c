#include<stdio.h>
int main(){
    int x;
    int y;
    char z[100];
    scanf("d %d %s",&x,&y,z);
    if(z==+){
        printf("%d",x+y);
    }
    else if(z==-){
        printf("%d",x-y);
    }
    else if(z==*){
        printf("%d",x*y);
    }
    else if(z==/){
        printf("%d",x/y);
    }
    else{
        printf("error");
    }
       return 0;
     }