#include<stdio.h>

int main(){
int id[10], i, j, marks[10]={0};

printf("Enter the id: ");
for (i=0; i<10; i++){
scanf("%d", &id[i]);
if (marks[id[i]]==0){
marks[id[i]]=1;
}
else {
id[i]=-1;
}
}
printf("New array:\n");
for (i=0; i<10; i++){
printf("%d ", id[i]);
}

return 0;
}
