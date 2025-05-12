#include<stdio.h>
#include<conio.h>

int main(void){
	float a,b;
	printf("Enter a first number:");
	scanf("%f",&a);
	
	printf("Enter a second number:");
	scanf("%f",&b);
	
	printf("%f + %f = %f \n",a,b,a+b);
	printf("%f - %f = %f \n",a,b,a-b);
	printf("%f * %f = %f \n",a,b,a*b);
	printf("%f / %f = %f \n",a,b,a/b);
	
	return 0;
}