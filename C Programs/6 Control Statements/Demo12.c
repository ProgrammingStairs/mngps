// example showing the concept of nested if else statement 
// Example to print Grade
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Enter marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;
    per = total/5.0;

    printf("Total Marks : %d\n",total);
    printf("Percentage : %.2f\n",per);
    
    if(per>=75 && per<=100)
        printf("Grade A\n");
    else{
        if(per>=60 && per<75)
            printf("Grade B\n");
        else{
            if(per>=50 && per<60)
                printf("Grade C\n");
            else{
                if(per>=33 && per<50)
                    printf("Grade D\n");
                else
                    printf("Fail\n");
            }
        }
    }

    return 0;
}