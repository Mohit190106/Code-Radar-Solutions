#include <stdio.h>
int main(){
    int x;
    int y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(z== '+'){
        printf("%d",x+y);
    }
    else if(z== '-'){
        printf("%d",x-y);
    }
    else if(z== '*' ){
        printf("%d",x*y);
    }
     else if (z == '/') {
        // Cast x to float or use float for the division result
        if (y != 0) {
            printf("%d", x / y);  // Using %.2f for a rounded float output
        } else {
            printf("error");
        }
    }
    else{
        printf("error");
    }
       return 0;
     }