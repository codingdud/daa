#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(6*sizeof(int));
    // int arr[10];
    int prod=1;
    for(int j=0;j<6;j++){
        scanf("%d",&arr[j]);
        prod=prod*arr[j];
    }
    for(int i=0;i<6;i++){
        printf("\n%d--%d\n ",i,prod/arr[i]);
    }
        
}