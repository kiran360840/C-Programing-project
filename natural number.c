#include<stdio.h>
int main(){
	int a;
	
	printf("Enter number: ");
	scanf("%d",&a);
	
	for(int i=1; i<=a; i++){
		
		printf("%d + %d = %d \n",i,a,i+a);	
		
	}
	
	return 0;
	
}