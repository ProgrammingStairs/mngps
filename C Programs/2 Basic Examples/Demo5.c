// example 

#include<stdio.h>
int main(){
    int a=012,b=0x12,c=0xa12;
    printf("value of a : %d\n",a); 
    printf("value of b : %d\n",b);
    printf("value of c : %d\n",c);
    return 0;
}
/*
    012
    here 0 represents octal number system (0-7)
    1 x 8^1 + 2 x 8^0
    1 x 8 + 2 x 1 
    8 + 2 = 10

    0x12
    here 0x represents hexadecimal number system (0-15)
    0   1   2   3   4   5   6   7   8   9   A   B   C   D   E   F
                                            a   b   c   d   e   f 
                                            10  11  12  13  14  15 
    1 x 16^1 + 2 x 16^0
    1 x 16 + 2 x 1 
    16 + 2 = 18

    a x 16^2 + 1 x 16^1 + 2 x 16^0
    10 x 256 + 1 x 16 + 2 x 1 
    2560 + 16 + 2
    2578
*/