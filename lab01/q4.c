#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(10*sizeof(int));
    for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<10-1;i++){
        if(arr[i]>arr[i+1]){
            printf("k=%d",i);
            exit(0);
        }
    }
    printf("not found!");
}