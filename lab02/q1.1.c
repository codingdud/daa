#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=2;i<(int)sqrt(num+1)+1;i++){
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