#include<stdio.h>
#include<stdlib.h>

int main(){

    // Don't execute this for any reason.

    while (1) {
        int *p = malloc(sizeof(int));
        *p = 42;
    }

    return 0;

}