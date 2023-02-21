#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int* createarray(int len){
    int* arr =(int*)malloc(sizeof(int)*len);
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < len; i++)
    {
        arr[i]=rand()%len;
    } 
    return arr;
}
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int* arr,int low ,int hig){
    int j=hig,i=low,piv=arr[low];
    while(i<j){
        while (piv>arr[++i]);
        while(piv<arr[--j]);
        if(i<=j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int* arr,int low,int hig){
    if(low<hig){
        int mid=partition(arr,low,hig);
        quicksort(arr,low,mid);
        quicksort(arr,mid+1,hig);
    }
}
void display(int *arr,int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int len;
    printf("enter a len:");
    scanf("%d",&len);
    int *arr=createarray(len);
    display(arr,len);
    quicksort(arr,0,len);
    display(arr,len);


}