
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<num/2+1;i++){
        if(num%i==0){
            count++;
        }
        if(count>1){
            printf("not a prime");
            exit(0);
        }
    } 
    printf("prime");   
}