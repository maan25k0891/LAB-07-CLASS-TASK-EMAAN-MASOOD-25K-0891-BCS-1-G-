#include <stdio.h>

int main() {
    char str[100];

    printf("Enter any characters: ");
    scanf("%[^A-Za-z]", str); 

    printf("You entered: %s\n", str);

    return 0;
}


