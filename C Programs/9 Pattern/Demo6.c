/*
  Floyd's triangle
  1
  23
  456
  78910

  1   2   3   4   5   6   7   8   9   10....
a=1    a++
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);
    int a=1;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d",a++);
        }
        printf("\n");
    }
    return 0;
}