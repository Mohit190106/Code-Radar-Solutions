#include <stdio.h>
int main(){
    int x;

    int y;
    
    int z;
    scanf("%d %d %d",&x,&y,&z);

if(x>y && x>z){
    printf("%d",x);
}
if(y>z && y>x){
    printf("%d",y);
}
else{
    printf("%d",z);
}
return 0;
}