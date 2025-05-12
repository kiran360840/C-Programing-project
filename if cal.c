#include<stdio.h>
int main(){
	
    int first, last, numsqr, choice;
        	
    printf("1: Add the two number.\n");
    printf("2: Subtract the two number.\n");
    printf("3: Multiply the two number.\n");
    printf("4: Divide the two number.\n");
    printf("5: Give you square number.\n");
    
    printf("\n");
    
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    if(choice==1||choice==2||choice==3||choice==4){
    	
    	printf("Enter a first number: ");
    	scanf("%d",&first);
    
    	printf("Enter a second number: ");
    	scanf("%d",&last);
        
        if(choice==1){
            printf("%d + %d = %d\n",first, last, first + last);
        }
        
        if(choice==2){
            printf("%d - %d = %d\n",first, last, first - last);
        }
        
        if(choice==3){
            printf("%d * %d = %d\n",first, last, first * last);
        }
        
        if(choice==4){
            printf("%d / %d = %d\n",first, last, first / last);
            printf("Reminder: %d\n",first % last);
        }
    }
    else if(choice==5){
    	
        printf("Enter your number: ");
        scanf("%d",&numsqr);
        
        
        printf("The square number of %d is: %d.\n",numsqr ,numsqr*numsqr);
        
    }
    
    else{
    	
        printf("Your choice is incorrect.\nplease enter the correct choice\n");
        
    }
    
    return 0;
}