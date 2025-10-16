#include <stdio.h>

int main() {
    int num[10];
    int i, max, min, difference;

    printf("Enter any 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];


    for (i = 1; i < 10; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    difference = max - min;

    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);
    printf("Difference = %d\n", difference);

    return 0;
}
