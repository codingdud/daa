#include<stdlib.h>
#include<stdio.h>
int udf(int* arr,int size){
    int sum=0,temp;
    int ti,tj,j;
    for (int i = 0; i<size; i++)
    {
        temp=0;
        for ( j = i; j < size; j++)
        {
            temp=temp+arr[j];
        }
        if(temp>sum){
            sum=temp;
            ti =i;
            tj =j;
        }
        
    }
    printf("%d %d %d",ti,tj,sum);
    
}
int main(){
    printf("enter a length of array:");
    int size;
    scanf("%d",&size);
    int* arr=(int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d",arr+i);
    }
    /* for (int i = 0; i < size; i++)
    {
        printf("%d\n",*(arr+i));
    } */
    udf(arr,size);
}