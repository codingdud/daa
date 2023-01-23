#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fun(int num,int sqr){
    if(sqr==1) return 1;
    if(num%sqr==0) return 0;
    fun(num,sqr-1); 
}
int main(){
    int num;
    scanf("%d",&num);
    fun(num,sqrt(num));
  
}