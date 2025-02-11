#include<stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if(x==x && y==y || -x==-x && -y==-y ){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}