#include<stdio.h>
#include<stdlib.h>

int udf(int* arr,int size){
    int count;
    for (int i = 0; i < size; i++)
    {
        count=0;
        for (int j = 0; i < size; i++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>=size/2){
            return count;
        }
    }
    
}
int udf1(int* arr,int size){
    int count;
    for (int i = 0; i < size; i++)
    {
        count=0;
        for (int j = 0; i < size; i++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>=size/2){
            return count;
        }
        return 0;
    }
    
}
int main(){
    printf("enter a length of array:");
    int dyana;
    scanf("%d",&dyana);
    int* arr=(int*)malloc(dyana*sizeof(int));
    for (int i = 0; i < dyana; i++)
    {
        scanf("%d",arr+i);
    }
    /* for (int i = 0; i < dyana; i++)
    {
        printf("%d\n",*(arr+i));
    } */
    printf("if >n/2 show freq else show 0:%d",udf(arr,dyana));
    
}