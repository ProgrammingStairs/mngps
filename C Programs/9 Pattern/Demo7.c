/*
    A       65                 64+1
    AB      65 66              64+1 64+2
    ABC     65 66 67           64+1 64+2 64+3 
    ABCD    65 66 67 68        64+1 64+2 64+3 64+4
    ABCDE   65 66 67 68 69     64+1 64+2 64+3 64+4 64+5
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}