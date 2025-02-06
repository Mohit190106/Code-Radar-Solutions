#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d %d %d",&x,&y,&z);
    int a=(x+y+z)/3;
    printf("Average: %.2f",a);
    return 0;
}