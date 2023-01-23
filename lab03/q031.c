#include<stdlib.h>
#include<stdio.h>
int kardan(int* arr,int n){
    int max,sum=0;
   for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if(max<sum) max=sum;
    if(sum<0) sum=0;
   }
   return max;
}
int kardan2d(int **arr,int n){
    int *temp;
    int max;
    for(int i=0;i<n;i++){
        free(temp);
        temp=(int*)calloc(n,sizeof(int));
        for(int j=i;j<n;j++){
                for(int t=0;t<n;t++){
                    temp[t]=temp[t]+arr[t][j];
                }
            }
            max=kardan(temp,n);
        }
        return max;
    }
int main(){
    int n;
    printf("enter a number to create a squar materix:-");
    scanf("%d",&n);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=(int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   printf("%d",kardan2d(arr,n));
    return 0;
}