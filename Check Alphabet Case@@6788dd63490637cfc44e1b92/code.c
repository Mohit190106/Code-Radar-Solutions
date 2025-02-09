#include <stdio.h>
#include <ctype.h>  // For isupper() and islower() functions

int main() {
    char ch;

    // Ask user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } else {
        printf("'%c' is neither an uppercase nor a lowercase letter.\n", ch);
    }

    return 0;
}
