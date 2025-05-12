#include<stdio.h>
int main(){
	
int a[2][2],b[2][2],sum[2][2];
int i,n;

for(i=0;i<2;i++){
	for(n=0;n<2;n++){
		printf("Enter your first matrix[%d][%d]:",i+1,1+n);
		scanf("%d",&a[i][n]);
	}
}

for(i=0;i<2;i++){
	for(n=0;n<2;n++){
		printf("Enter your second matrix[%d][%d]:",i+1,1+n);
		scanf("%d",&b[i][n]);
	}
}

for(i=0;i<2;i++){
	for(n=0;n<2;n++){
		sum[i][n]=a[i][n]+b[i][n];
		printf("Sum of given matrix[%d][%d]:%d \n",i+1,1+n,sum[i][n]);
	}
}

return 0;

}