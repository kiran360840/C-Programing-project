#include<stdio.h>

typedef struct Student_info{
	
	char name[10];
	int roll;
	float english,nepali,science,total,percentage;
	
} info;
int main(){
	
	info a[12];
	
	for(int i=0; i<12; i++){
		
		printf("Enter your name: ");
		scanf("%s",a[i].name);
		printf("Enter your roll no: ");
		scanf("%d",&a[i].roll);
		printf("Enter your english marks: ");
		scanf("%f",&a[i].english);
		printf("Enter your nepali marks: ");
		scanf("%f",&a[i].nepali);
		printf("enter your science marks: ");
		scanf("%f",&a[i].science);
		
		printf("===============================================\n");
		
	}
	
	for(int i=0; i<12; i++){
		
		a[i].total=a[i].english+a[i].nepali+a[i].science;
		a[i].percentage=(a[i].total / 300)*100;
		
		printf("------student-info-%d------\n",i+1);
		
		printf("Name: %s\n",a[i].name);
		printf("Roll no: %d\n",a[i].roll);
		printf("English marks: %f\n",a[i].english);
		printf("Nepali marks: %f\n",a[i].nepali);
		printf("Science marks: %f\n",a[i].science);
		printf("Total marks: %.0f\n",a[i].total);
		printf("Total marks in percentage: %.1f\n",a[i].percentage);
		
		printf("\n----------------------------\n");
		
	}
	
	return 0;
}
