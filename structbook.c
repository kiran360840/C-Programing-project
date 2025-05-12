#include <stdio.h>
#include <string.h>

struct book{
    int price;
    char title[20];
    char note[3];
};

int main() {
    
    struct book books;
    strcpy(books.title, "C-programing\n");
    strcpy(books.note, "RS.");
    books.price = 300;
    printf("Book name: %s",books.title);
    printf("Book price: %s%d", books.note, books.price);
    
    return 0;
}