#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(10*sizeof(int));
    // int arr[10];
    for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
           if(arr[i]*arr[i]+arr[j]*arr[j]==key){
                printf("%d %d",i,j);
                exit(0);
           }
        } 
    }
        
}