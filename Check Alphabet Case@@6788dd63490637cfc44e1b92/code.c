#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (isupper(ch)) {
        printf("Uppercase ");
    } 
    else(islower(ch)) {
        printf("Lowercase");
    }
    return 0;
}
