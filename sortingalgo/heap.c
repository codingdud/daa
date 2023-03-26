#include<stdlib.h>
#include<stdio.h>
int* arr;
int temp,cursor=-1;
void createheap(int value){
    arr[++cursor]=value;
    int j=cursor,i=cursor;
    while(0<i){
        i=(i-1)/2;
        if(arr[i]<arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j=i;
        }
    }
}
void display(){
    for(int i=0;i<=cursor;i++){
        printf("%d ",arr[i]);
    }
}
void maxheap(int i){
    int max=i,left=i*2+1,right=i*2+2;
    if(i<cursor/2&&arr[i]<arr[left]){
        max=left;
    }
   if(i<cursor/2&&arr[right]>arr[max]){
        max=right;
    }
    if(max!=i){
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
        maxheap(max);
    }
}
int deleate(){
    int data=arr[0];
    arr[0]=arr[cursor--];
    maxheap(0);
    return data;
}

void minheap(int i){
    int min=i,left=i*2+1,right=i*2+2;
    if(i<cursor/2&&arr[i]>arr[left]){
        min=left;
    }
   if(i<cursor/2&&arr[right]<arr[min]){
        min=right;
    }
    if(min!=i){
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        minheap(min);
    }
}
void hipyfie(){
    int i=cursor/2-1;
    while(0<=i){
        minheap(i);
        i--;
    }
}
int main(){
    int n;
    printf("enter a length:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    createheap(10);
    createheap(20);
    createheap(30);
    createheap(5);
    createheap(234);
    createheap(1);
    printf("\n");
    display();
    printf("\n");
    deleate();
    printf("\n");
    display();
    hipyfie();
    printf("\n");
    display();

}