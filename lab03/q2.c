#include<stdio.h>
void udf(int num){
    int temp =0;
    int sqrt=num/2;
    while (sqrt!=temp)
    {
        temp=sqrt;
        sqrt=(num/temp+temp)/2;
    }
    printf("%d",sqrt);
}
int main(){
    int num;
    scanf("%d",&num);
    udf(num);
}