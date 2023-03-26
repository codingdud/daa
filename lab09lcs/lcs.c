#include<stdlib.h>
#include<stdio.h>
#define DRECTION(val) val==0?'^':val==1?'<':val==2?'`':'0'
typedef enum {top,left,diagonal,null} direction;
typedef struct{
    char ch;
    direction dir;
    int value;
} cls;

void print_cls(cls** arr,int m,int n){
    //m row and n collum

    if((*(arr+m)+n)->dir==null||m==0||n==0){
        return;
    }

    else if((*(arr+m)+n)->dir==diagonal){
        print_cls(arr,m-1,n-1);
         printf("%c ",(*arr+n)->ch);
    }
    else if((*(arr+m)+n)->dir==top){
        print_cls(arr,m-1,n);
    }
    else{
         print_cls(arr,m,n-1);
    }

}

int main(){
//get two string of length mm,n
    char str1[255];
    char str2[255];
    printf("enter a value for str1:");
    scanf("%s",str1);
    printf("enter a value for str2:");
    scanf("%s",str2);
    int m=0,n=0;
    while(str1[n++]!='\0');
    while(str2[m++]!='\0');
    printf("%d %d \n",n,m);
    cls** arr=(cls**)malloc(sizeof(cls)*m);
    for(int i=0;i<m;i++){
        arr[i]=(cls*)malloc(n*sizeof(cls));
    }
    (*arr)->value=0;
    (*arr)->dir=null;
    (*arr)->ch='0';
    for(int i=1;i<n;i++){
        (*(arr+0)+i)->ch=str1[i-1];
        (*(arr+0)+i)->value=0;
        (*(arr+0)+i)->dir=null;
    }
    for(int i=1;i<m;i++){
        (*(arr+i)+0)->ch=str2[i-1];
        (*(arr+i)+0)->value=0;
        (*(arr+i)+0)->dir=null;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if((*(arr+i))->ch==(*arr+j)->ch){
                (*(arr+i)+j)->ch='1';
                (*(arr+i)+j)->value=(*(arr+i-1)+j-1)->value+1;
                (*(arr+i)+j)->dir=diagonal;
            }
            else if((*(arr+i-1)+j)->value>=(*(arr+i)+j-1)->value){
                (*(arr+i)+j)->ch='x';
                (*(arr+i)+j)->value=(*(arr+i-1)+j)->value;
                (*(arr+i)+j)->dir=top;
            }
            else{
                (*(arr+i)+j)->ch='x';
                (*(arr+i)+j)->value=(*(arr+i)+j-1)->value;
                (*(arr+i)+j)->dir=left;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0) printf(":%c\t",(*(arr+i)+j)->ch);
            else
            printf("%c%d \t",DRECTION((*(arr+i)+j)->dir),(*(arr+i)+j)->value);
        }
        printf("\n");
    }
    print_cls(arr,m-1,n-1);

}