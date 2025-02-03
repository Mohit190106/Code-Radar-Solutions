#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
}
if(x>y && x>z){
    printf("x is greater than y and z");
}
if(y>z && y>x){
    printf("y is greater than x and y");
}
else{
    printf("z is greater than x and y");
}