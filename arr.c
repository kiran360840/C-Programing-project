#include<stdio.h>
#include<conio.h>

void Add()
{
	
	int arr[2];
	int arr1[2];
	int total[2];
	
	printf("Enter first array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter second array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Add of two array: \n");
	
	for(int i=0;i<2;i++){
		total[i]=arr[i]+arr1[i];
		printf("%d \t \n",total[i]);
	}
	
	printf("\n");
	printf("\n");
	
}

void Sub()
{
	
	int arr[2];
	int arr1[2];
	int total[2];
	
	printf("Enter first array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter second array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Subctratc of two array: \n");
	
	for(int i=0;i<2;i++){
		total[i]=arr[i]-arr1[i];
		printf("%d \t \n",total[i]);
	}
	
	printf("\n");
	printf("\n");
	
}

void Mult()
{
	
	int arr[2];
	int arr1[2];
	int total[2];
	
	printf("Enter first array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter second array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Multiply of two array: \n");
	
	for(int i=0;i<2;i++){
		total[i]=arr[i]*arr1[i];
		printf("%d \t \n",total[i]);
	}
	
	printf("\n");
	printf("\n");
	
}

void Div()
{
	
	float arr[2];
	float arr1[2];
	float total[2];
	
	printf("Enter first array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter second array:");
	
	for(int i=0;i<2;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Divide of two array: \n");
	
	for(int i=0;i<2;i++){
		total[i]=arr[i]/arr1[i];
		printf("%d \t \n",total[i]);
	}
	
	printf("\n");
	printf("\n");
	
}

int main(void)
{
	
	Add();
	Sub();
	Mult();
	Div();
	
	return 0;
}