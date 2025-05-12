#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void formula(){
	
	printf("\n---------------------------------------------------------------------------\n");
	printf("\n");
	printf("\t\t1.Area of 4 wall: 2h(l+b).\n");
	printf("\t\t2.Area of 4 wall encluding windows and door:\n\t\t  2h(l+b)-nd(l1+h1)+nw(l2+h2).\n");
	printf("\t\t Where,\n\t\t L = Lenght.\n\t\t B = Breadth.\n\t\t H = Height.\n\t\t ND = Number of door.\n\t\t NW = Number of windows.\n");
	printf("\n---------------------------------------------------------------------------\n");
	printf("\n");
	
	sleep(10);
	
	main();
}

void calculate(){
	
	float choice,length, breadth, height, d_length, d_height ,w_length, w_height, w_counter, d_counter, calculate;
	
	printf("\n---------------------------------------------------------------------------\n");
	printf("\n");
	printf("\t\t\t\tSelect your option.\n");
	printf("\t\t\t1.Area of 4 wall.\n");
	printf("\t\t\t2.Area of 4 wall including door.\n");
	printf("\t\t\t3.Area of 4 wall including windows.\n");
	printf("\t\t\t4.Area of 4 wall including door and windows.\n");
	printf("\t\t\t5.Area of 4 wall excluding door.\n");
	printf("\t\t\t6.Area of 4 wall excluding windows.\n");
	printf("\t\t\t7.Area of 4 wall excluding door and windows.\n");
	printf("\n---------------------------------------------------------------------------\n");
	
	scanf("%f",&choice);
	
	system("cls");
	
	sleep(0.9);
	
	if(choice == 1){
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 2){
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including door.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of door: ");
		scanf("%f",&d_counter);
		printf("\t\t\tEnter a length of door: ");
		scanf("%f",&d_length);
		printf("\t\t\tEnter a height of door: ");
		scanf("%f",&d_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)+d_counter*(d_length*d_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including door: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 3){
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including windows.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of windows: ");
		scanf("%f",&w_counter);
		printf("\t\t\tEnter a length of windows: ");
		scanf("%f",&w_length);
		printf("\t\t\tEnter a height of windows: ");
		scanf("%f",&w_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)+w_counter*(w_length*w_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including windows: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 4){
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including windows and door.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of windows: ");
		scanf("%f",&w_counter);
		printf("\t\t\tEnter a length of windows: ");
		scanf("%f",&w_length);
		printf("\t\t\tEnter a height of windows: ");
		scanf("%f",&w_height);
		printf("\t\t\tEnter a number of door: ");
		scanf("%f",&d_counter);
		printf("\t\t\tEnter a length of door: ");
		scanf("%f",&d_length);
		printf("\t\t\tEnter a height of door: ");
		scanf("%f",&d_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)+w_counter*(w_length*w_height)+d_counter*(d_length*d_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall including door and windows: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 5){
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding door.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of door: ");
		scanf("%f",&d_counter);
		printf("\t\t\tEnter a length of door: ");
		scanf("%f",&d_length);
		printf("\t\t\tEnter a height of door: ");
		scanf("%f",&d_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)-d_counter*(d_length*d_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding door: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 6){
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding windows.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of windows: ");
		scanf("%f",&w_counter);
		printf("\t\t\tEnter a length of windows: ");
		scanf("%f",&w_length);
		printf("\t\t\tEnter a height of windows: ");
		scanf("%f",&w_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)-w_counter*(w_length*w_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding windows: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else if(choice == 7){
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding door and windows.\n");
		printf("\t\t\tEnter a length: ");
		scanf("%f",&length);
		printf("\t\t\tEnter a breadth: ");
		scanf("%f",&breadth);
		printf("\t\t\tEnter a height: ");
		scanf("%f",&height);
		printf("\t\t\tEnter a number of windows: ");
		scanf("%f",&w_counter);
		printf("\t\t\tEnter a length of windows: ");
		scanf("%f",&w_length);
		printf("\t\t\tEnter a height of windows: ");
		scanf("%f",&w_height);
		printf("\t\t\tEnter a number of door: ");
		scanf("%f",&d_counter);
		printf("\t\t\tEnter a length of door: ");
		scanf("%f",&d_length);
		printf("\t\t\tEnter a height of door: ");
		scanf("%f",&d_height);
		printf("\n---------------------------------------------------------------------------\n");
		
		calculate = height*2*(length+breadth)-w_counter*(w_length*w_height)-d_counter*(d_length*d_height);
		
		printf("\n---------------------------------------------------------------------------\n");
		printf("\t\t\tArea of 4 wall excluding door and windows: %.1f\n",calculate);
		printf("\n---------------------------------------------------------------------------\n");
	}
	
	else{
		
		printf("Enter a correct option.\n");
		
	}
}


int main(void){
int choice;
sleep(0.1);	
system("cls");

printf("\n--------------------------------------------------------------\n");
printf("\n");
printf("\t\t\tSelect your option.\n");
printf("\t\t1.Formula of 4 wall area.\n");
printf("\t\t2.Calculate the area of 4 wall.\n");
printf("\n--------------------------------------------------------------\n");

scanf("%d",&choice);

sleep(0.9);

system("cls");

if(choice == 1){
	
	formula();
	
}
else if(choice == 2){
	
	calculate();
	
}
else{
	
	printf("Enter a correct option.\n");
	
}

return 0;
}