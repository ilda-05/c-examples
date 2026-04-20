#include<stdio.h>

struct Book
{
    int id;
    int pages;
};


int main(){

    struct Book book1; 

    book1.pages=5;
    book1.id=1;

    struct Book* ptr = &book1;



    printf("%p\n", ptr);
    printf("%d", *ptr->pages);
    

    return 0;

}