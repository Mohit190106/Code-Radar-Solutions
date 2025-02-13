#include <stdio.h>

int main() {
    int num, result, shiftAmount;
    scanf("%d", &num,&shiftAmount);
    result = num << shiftAmount;
    printf("%d\n", num<<shiftAmount, result);

    return 0;
}