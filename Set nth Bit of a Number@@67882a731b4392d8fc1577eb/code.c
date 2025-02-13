#include <stdio.h>

int setNthBit(int num, int n) {
    int mask = 1 << n;

    return num | mask;
}

int main() {
    int num, n;
    scanf("%d", &num,&n);
    int result = setNthBit(num, n);
    printf("%d\n", n, result);
    
    return 0;
}
