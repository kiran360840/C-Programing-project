#include<stdio.h>
int bal(int a, int b){
	return a + b;
}
int main(){
	int fnum, lnum, result;
	
	printf("Enter a first number: ");
	scanf("%d",&fnum);
	
	printf("Enter a second number: ");
	scanf("%d",&lnum);
	
	result = bal(fnum, lnum);
	
	printf("Sum of two number from paremite user define: %d",result);
	
	return 0;
}