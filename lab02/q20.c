#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fun(int num1,int num2){
    if(num2==0){
        return num1;
    }
    fun(num2,num1%num2);
}
int main(){
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d",fun(num1,num2));
    
  
}