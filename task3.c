#include<stdio.h>

int main(){
int marks, i, pass[10], passcount=0, fail[10], failcount=0, passum=0, failsum=0;

printf("Enter marks of all 10 students: ");
for (i=0; i<10; i++){
scanf("%d", &marks);
if (marks == -1){
break;
}
if (marks>=5 && marks<=10){
pass[passcount++]=marks;
passum=passum+marks;
}
else if (marks<5 && marks>=0){
fail[failcount++]=marks;
failsum=failsum+marks;
}
}
printf("Pass marks: ");
    for(i = 0; i < passcount; i++)
        printf("%d ", pass[i]);
    printf("\nAverage pass marks: %.2f\n", passcount ? (float)passum / passcount : 0);

    printf("Fail marks: ");
    for(i = 0; i < failcount; i++)
        printf("%d ", fail[i]);
    printf("\nAverage fail marks: %.2f\n", failcount ? (float)failsum / failcount : 0);

return 0;
}
