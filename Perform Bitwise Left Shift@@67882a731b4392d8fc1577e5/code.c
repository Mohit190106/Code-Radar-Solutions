#include <stdio.h>

int main() {
    int num, result, shiftAmount;
    scanf("%d %d", &num, &shiftAmount);
    result = num << shiftAmount;
    printf("%d << %d = %d\n", num, shiftAmount, result);
    return 0;
}
