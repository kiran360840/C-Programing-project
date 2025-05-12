#include<stdio.h>
void add(){
    int a[2][2],b[2][2],c[2][2];
    printf("Enter first matrix: \n");
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter second matrix: \n");
    
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n");
    
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    add();
    
}