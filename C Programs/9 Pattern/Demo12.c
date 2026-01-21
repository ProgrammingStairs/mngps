/*
i=8    12345678     even 1-i
i=7    7654321           odd i-1
i=6    123456       even 1-i 
i=5    54321             odd i-1
i=4    1234         even 1-i
i=3    321               odd i-1
i=2    12           even 1-i  
i=1    1                 odd i-1 
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=rows;i>=1;i--){
        if(i%2==0){
            for(j=1;j<=i;j++)
                printf("%d",j);
            printf("\n");
        }else{
            for(j=i;j>=1;j--)
                printf("%d",j);
            printf("\n");
        }    
    }
    return 0;
}