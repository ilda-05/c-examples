#include<stdio.h>

struct book{

    int pages;

};

int main(){

    struct book book1;
    struct book book2;

    book1.pages=50;
    book2.pages=25;

    struct book books[2]={book1,book2};

    for(int i=0;i<sizeof(books)/sizeof(books[0]);i++){

        printf("book %d: pages=%d \n", i+1, books[i].pages);

    }
    


    return 0;

}