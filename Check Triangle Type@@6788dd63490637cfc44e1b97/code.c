#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z){
        printf("Equilateral");
    }
    else if(x==y || y==z){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}