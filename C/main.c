#include <stdio.h>
#include <string.h>

int main() {
    char searchChar;
    int charCount = 0;
    char userString[50];

    printf("Enter a string: ");
    fgets(userString, 50, stdin);

    printf("Enter a character: ");
    scanf("%c", &searchChar);

    printf("User string: %s", userString);
    printf("User char: %c\n", searchChar);

    for (int i = 0; i < strlen(userString); i++) {
        if (userString[i] == searchChar) {
            charCount++;
        }
    }

    printf("Character Found: %d times.", charCount);

    return 0;
}
