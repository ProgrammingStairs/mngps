// example showing the concept of pointer variable
#include<stdio.h>
int main(){
   int a = 100, *ptr; // here ptr is pointer variable 
   printf("value of a :  %d\n",a);
   printf("address of a : %p\n",&a);
   printf("address of a : %u\n",&a);

   ptr = &a;
   printf("address of ptr : %p\n",&ptr);
   printf("address which ptr holds : %p\n",ptr);
   printf("value at address which ptr holds : %d\n",*ptr);
         
   return 0;
}