#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void randnumgame(){
	
    int n=100,randnum,attempt=0,usernum;
    
    srand(time(NULL));
    randnum = rand() % n + 1;
    
    printf("Number guess game.\n");
    printf("Enter any number between 1 to 100.\n");
    printf("Only positive number are allowed.\n");
    printf("Enter you number: ");
    
    do{
        
    scanf("%d",&usernum);
    attempt++;
    
    if(randnum == usernum){
        
        printf("Your guess is correct.\n");
        printf("Your attempt: %d\n",attempt);
        
        if(attempt == 1){
            
            printf("Hacker🤯!!\n");
            
        }
        
        else if(attempt > 15){
            
            printf("Pretty tuff huh!!\n");
            
        }
        
        else if(attempt < 15){
            
            printf("You got easy one!!\n");
            
        }
        
    }
    if(randnum != usernum){
        
        printf("your guess is incorrect.\nTry again.\n");
        
        if(randnum <= usernum){
            
            printf("Too high!!\n");
            
        }
        else{
            printf("Too low!!\n");
            
        }
    }
    }
    while(randnum != usernum);
}
int main(){
	char* repeat="y";
	
    do{
        	
    randnumgame();
    
    printf("Enter(y/n): ");
    scanf("%s",&repeat);
    
	}while(repeat=="Y"||repeat=="y");
    
    return 0;
}