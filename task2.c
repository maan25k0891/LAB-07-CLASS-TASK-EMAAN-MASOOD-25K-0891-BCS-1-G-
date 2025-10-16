#include <stdio.h>
int main (){
	int arr[10], n, i, count = 0;
	
	printf("Enter any 10 integers: ");
	for (i = 0; i < 10; i++) {
	scanf("%d", &arr[i]);
}

    printf("Which number do you want to search? ");
    scanf("%d", &n);
    
    for (i = 0; i < 10; i++) {
        if (arr[i] == n) {
            count++;
        }
    }
    
    if (count == 0) {
    	    printf("Number not found\n");
    } else {
    	    printf("%d occurs %d times\n", n, count);
    }
    return 0;
}
