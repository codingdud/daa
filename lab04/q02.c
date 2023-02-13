#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void mergeshorttwoarr(int *arr,int  n,int mid,int m){
    int i=n,j=mid+1;
    int f=0;
    int arr1[m-n];
    while(i<=mid&&j<=m){
        if(arr[i]<arr[j]){
            arr1[f++]=arr[i];
            //printf("%d\t",arr[i]);
            i++;
        }
        else{
            arr1[f++]=arr[j];
            //printf("%d\t",arr[j]);
            j++;
        }
    }
    while(i<=mid){
        arr1[f++]=arr[i];
        i++;
    }
    while(j<=m){
        arr1[f++]=arr[j];
        j++;
    }
    f=0;
    while(n<=m){
        arr[n++]=arr1[f++];
    }
}
void mergeshort(int *arr,int l,int m){
if(l==m){
    return ;
}
int mid =l+(m-l)/2;
mergeshort(arr,l,mid);
mergeshort(arr,mid+1,m);
mergeshorttwoarr(arr,l,mid,m);
}

int main(){
    time_t start,difference,t;
    srand((unsigned) time(&t));


    int length;
    printf("enter a length of array:");
    scanf("%d",&length);
    start = clock();

    int* arr=(int*)malloc(length*sizeof(int));


    for(int i=0;i<length;i++){
        arr[i]=rand()%length;
    }


    for(int i=0;i<length;i++){
       printf("%d ", arr[i]);
    }


    mergeshort(arr,0,length-1);
    printf("\n \v");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }


    difference=clock()-start;
    double time_consumed = ((double)difference);
    printf("\n%f\n", time_consumed);

}
