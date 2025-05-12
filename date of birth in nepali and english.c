#include<stdio.h>
int main(){
    
    int num,year,res,choice;
    for(int i =0; i<10; i++){
	
    printf("Enter your choice.\n");
    printf("1.Nepali.\n");
    printf("2.English.\n");
    scanf("%d",&choice);
    
    if(choice == 1){
        year = 2081;
    printf("Enter your nepali date of birth: ");
    scanf("%d",&num);
    
    res = year - num; 
    
    printf("Your age is %d years old in nepali calender.\n",res);
    }
    else if(choice == 2){
        year = 2025;
    printf("Enter your english date of birth: ");
    scanf("%d",&num);
    
    res = year - num; 
    
    printf("Your age is %d years old in english calender.\n",res);
    }
    printf("\n");
    printf("\n");
}
    return 0;
}