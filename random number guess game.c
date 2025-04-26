#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    
    int attempt=0,randlimit=100,usernum,randnum;
    srand(time(NULL));
    randnum = rand() % (randlimit+1);
    
    printf("Number guess game!!\n");
    printf("only positive number is allowed!!\n");
    printf("1 to 100 number number guess!!\n");
    printf("%d\n",randnum);
    printf("Enter any number to guess: ");
    do{
    scanf("%d",&usernum);
    attempt++;
    if(usernum < randnum){
        printf("Too low!!\n");
    }
    if(usernum > randnum){
        printf("Too high!!\n");
    }
    if(usernum == randnum){
        printf("Your guess is correct!!\n");
        printf("Your attempt %d!!\n",attempt);
        if(attempt == 1){
           printf("Hacker🤯😡!!\n"); 
        }
        else if(attempt >= 15){
            printf("You got pretty tuff.\nPoor player!!\n");
        }
        else if(attempt <= 15){
            printf("You got easy one to predect.\n");
        }
    }
        }while(usernum != randnum);
    return 0;
}
