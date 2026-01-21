// Example showing the concept of jump statement -- goto label

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(int j=1;j<=3;j++){
            if(i==2 && j==2)
                goto myCode;
            printf("\tj : %d\n",j);
        }
    }
    myCode:
        printf("End of program");
    return 0;
}