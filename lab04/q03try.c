#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int divcormax(int *arr,int l,int h){
    if(l>=h) return l;

    int lb,hb,mid=(l+h)/2;
    lb=divcormax(arr,l,mid);
    hb=divcormax(arr,mid+1,h);
    if(arr[lb]<arr[hb]) return hb;
    else return lb;
}

int main(){
    time_t start,diff,t;
    srand((unsigned) time(&t));
    int length;
    printf("enter a length of array:");
    scanf("%d",&length);

    int* arr=(int*)malloc(length*sizeof(int));

for(int i=0;i<length;i++){
    arr[i]=rand()%length;
    //printf("%d ",arr[i]);
}
printf("\n");

     start = clock();
   printf("%d",arr[divcormax(arr,0,length-1)]);  
   diff=clock()-start;
   printf("\n%f",(double)diff);                                                         
}