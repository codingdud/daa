#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(10*sizeof(int));
    for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
    }
    int index=0,index1=0,index2=0;
    for(int i=0;i<10;i++){
        for(int j=i+0;j<10;j++){
           if(arr[i]==arr[j]){
            index1=index1+1;
           } 
        }
        if(index1>index2) index2=index1;
    }
    printf("element with highst frequence",index2);
    
}