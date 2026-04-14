#include<stdio.h>

/**
 * 
 * Here's an example of how a value can be changed
 * using a function which don't return any value
 * 
 */

void changeValue(int* num){

    *num = 10;

}

/**
 * 
 * Why this works? because we pass trought changeValue the memory address of the variable
 * num, and in changeValue the value of that memory address will be changed to 10
 * 
 */

int main(){

    int num = 5;

    printf("Before the change : %d", num);

    changeValue(&num);

    printf("After the change : %d", num);

    return 0;

}