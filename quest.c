#include<stdio.h>

void first(){
	
char yes='y';
int b;

while(yes=='y'||yes=='Y'){
	
printf("1. Who give straw hat to luffy? \n");

printf("\n");

printf("1. Gol D. Roger. \n");
printf("2. Red Hair Shanks. \n");
printf("3. Dark king Rayleigh. \n");
printf("4. Monkey D. Garp. \n");

printf("\n");

printf("Choise 1, 2, 3 or 4: \n");
scanf("%d",&b);

switch(b){
	
	case 1:
		printf("Gol D. Roger. \n");
		break;
		
	case 2:
		printf("Red Hair Shanks. \n");
		break;
		
	case 3:
		printf("Dark king Rayleigh. \n");
		break;
			
	case 4:
		printf("Monkey D. Garp. \n");
		break;
		
	default:
		printf("This is not a option. \n");
		break;
		
	}
		
if(b==2){
	
	printf("Correct. \n");
	
}

else{
	
	printf("Incorrect. \n");
	
}

printf("\n");	
printf("\n");

printf("2. What is the name of sniper that is in straw hat crew? \n");

printf("\n");

printf("1. God Ushopp. \n");
printf("2. God D. Ushopp. \n");
printf("3. Ushopp. \n");
printf("4. Franky. \n");

printf("\n");

printf("Choise 1, 2, 3 or 4: \n");
scanf("%d",&b);

switch(b){
	
	case 1:
		printf("God Ushopp.\n");
		break;
		
	case 2:
		printf("God D. Ushopp. \n");
		break;
		
	case 3:
		printf("Ushopp.\n");
		break;
			
	case 4:
		printf("Franky.\n");
		break;
		
	default:
		printf("This is not a option. \n");
		break;
		
	}	
	
if(b==3){
	
	printf("Correct. \n");
	
}
else{
	
	printf("Incorrect. \n");
	
}

printf("\n");

printf("Enter(y/n): \n");
scanf("%c",&yes);

printf("\n");
printf("\n");

}

}


int main(){
	
	first();
	
	
	return 0;
}