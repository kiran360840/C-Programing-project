#include<stdio.h>
#include<string.h>

struct bookshop{
  char book[18];
  char note[3];
  int price;
};

int main(){
    
    char books[18]="Solo levling novel";
    char notes[3]="Rs.";
    int prices = 3000;
    
    bookshop info;
    info.book=books;
    info.note=notes;
    info.price=prices;
    
    void bookshop(){
    printf("Name of book: %s \nprice of book: %s%d",book,note,price);
  }
    
    return 0;
}