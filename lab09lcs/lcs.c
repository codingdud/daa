#include<stdlib.h>
#include<stdio.h>
typedef enum {top,left,diagonal,null} direction;
typedef struct{
    char ch;
    direction dir;
    int value;
} cls;
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
    (*arr)->ch='\0';
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
                (*(arr+i)+j)->ch='\0';
                (*(arr+i)+j)->value=(*(arr+i-1)+j-1)->value+1;
                (*(arr+i)+j)->dir=diagonal;
            }
            else if((*(arr+i-1)+j)->value>=((*arr+i)+j-1)->value){
                (*(arr+i)+j)->ch='\0';
                (*(arr+i)+j)->value=(*(arr+i-1)+j)->value;
                (*(arr+i)+j)->dir=top;
            }
            else{
                (*(arr+i)+j)->ch='\0';
                (*(arr+i)+j)->value=(*(arr+i)+j-1)->value;
                (*(arr+i)+j)->dir=left;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         
                printf("ch:%c dir:%d val:%d \t",(*(arr+i)+j)->ch,(*(arr+i)+j)->dir,(*(arr+i)+j)->value);
           
        }
        printf("\n");
    }


}