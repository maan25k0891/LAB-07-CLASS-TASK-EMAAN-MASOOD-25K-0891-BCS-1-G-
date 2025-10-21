#include <stdio.h>

int main() {
    char word[100];
    int vowels = 0;
	int consonants = 0;
    int i = 0;
    char ch;

    printf("Enter a word: ");
    scanf("%s", word);  

    while (word[i] != '\0') {  
        ch = word[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++; 
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

