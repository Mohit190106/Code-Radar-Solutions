#include <stdio.h>
int main(){
    float x;
    float y;
    float z;
    scanf("%f %f %f",&x,&y,&z);
    float a=(x+y+z)/3;
    printf("Average: %.2f",a);
    return 0;
}