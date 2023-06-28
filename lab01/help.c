#include<stdio.h>
#include<stdlib.h>



int solve(int* A, int n1, int B) {
    //first  four and last four
    int i,sum=0,sum1=0,sum2=0;
    for(i=0;i<B;i++){
        sum=sum+A[i];
        sum1=sum1+A[--n1];
        sum2=sum2+A[n1];
    }
    sum2=sum2-A[n1]+A[0];
    printf("%d %d %d",sum,sum1,sum2);
    return sum>=sum2&&sum>=sum1?sum:sum1>=sum2?sum1:sum2;
}



int main(){
    int* arr=(int*)malloc(6*sizeof(int));
    for(int j=0;j<6;j++){
        scanf("%d",&arr[j]);
    }
    printf("%d",solve(arr,6,4));
}