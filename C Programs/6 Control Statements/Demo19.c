// example showing the concept of switch control statement
#include<stdio.h>
int main(){
    int num=10,i=1;
    switch(i++){
        case -3: num--; 
        case 97 : --num;
        case 1 : num=0;
        case -2 : num++;
        default : 
            printf("Num : %d\n",num++);
            break;
    }
    return 0;
}