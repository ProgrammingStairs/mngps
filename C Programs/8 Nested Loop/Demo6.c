// Example to print table of all the numbers between two entered numbers 

#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter initial and final number : ");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++){
        printf("\nTable of %d\n",i);
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);   
        }
    }
    return 0;
}