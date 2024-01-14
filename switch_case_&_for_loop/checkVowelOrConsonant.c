#include <stdio.h>

int main() {
    // Variable declaration
    char letter;

    // User input for an alphabet
    printf("Enter an alphabet: \n");
    scanf(" %c", &letter);  // Note the space before %c to consume any leading whitespaces

    // Switch statement to check if the entered character is a vowel or consonant
    switch(letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel\n", letter);
            break;
        default:
            printf("%c is a consonant\n", letter);
    }

    // Return statement indicating successful execution
    return 0;
}
