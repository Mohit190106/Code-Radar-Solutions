#include<stdio.h>

int main() {
    float i;
    float n;
    scanf("%f", &n);
    
    for(i = n; i <= 1000; i++) {
        if(i % n == 0) {
            printf("%f\n", i);
        }
    }

    return 0;
}
