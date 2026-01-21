// Example to print all the palindrome numbers between two entered numbers 

#include<stdio.h>
int main(){
    int n,m,i,j,rev,rem,temp,temp1;
    printf("Enter initial and final number : ");
    scanf("%d%d",&n,&m);

    for(i=n;i<=m;i++){
        rev=0;
        temp = i;
        temp1 = i;
            while(temp>0){
                rem = temp%10;
                rev = rev * 10 + rem;
                temp = temp/10;
            }
            if(rev==temp1)
                printf("%d\t",rev);
    }
    return 0;
}