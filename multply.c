#include<stdio.h>
int main(){
	int range;
	printf("Enter number");
	for(int i=0; i<=10; i++){
		for(int j=0; j<=10; j++){
			printf("%d * %d = %d \n",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}