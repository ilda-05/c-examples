#include<stdio.h>

int main(){

    int num = 15;
    int* ptr = &num;

    /*

    NOTE: the type of the pointer variable have to be the same as the pointed variable

    */ 

    // Output of the memory address
    printf("%p\n",ptr);
    return 0;
    
}