#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d %d",n1,n2);
    int t=n2;
    while(n1%t!=0||n2%t!=0){
        t--;
    }
    printf("\n %d",t);
}