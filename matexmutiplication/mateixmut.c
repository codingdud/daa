#include<stdio.h>
#include<stdlib.h>

void display(int* arr,int len){
    for(int i=0;i<len;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
void setm1(int **m1,int len){
    for(int i=0;i<len;++i){
        m1[0][i]=0;
        m1[i][i]=0;
        m1[i][0]=0;
    }
}
void setm2(int **m1,int len){
    for(int i=0;i<len;++i){
        m1[0][i]=0;
        m1[i][i]=0;
        m1[i][0]=0;
    }
}
void print2d(int **m,int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if(j>=i) printf("%d ",m[i][j]);
            else printf("* ");
        }
        printf("\n");
    }
    
}
int main(){
    int len;
    printf("ente a length of array:");
    scanf("%d",&len);
    int *arr=(int*)malloc(len*sizeof(int));
    for(int i=0;i<len;i++){
        scanf("%d",(arr+i));
    }
    display(arr,len);
    int **m1=(int**)malloc(len*sizeof(int));
    for(int i=0;i<len;++i){
        m1[i]=(int*)malloc(len*sizeof(int));
    }
    int **m2=(int**)malloc(len*sizeof(int));
    for(int i=0;i<len;++i){
        m2[i]=(int*)malloc(len*sizeof(int));
    }
    setm1(m1,len);
    setm2(m2,len);
    print2d(m1,len);
    print2d(m2,len);

    for(int i=1;i<len-1;++i){

    }
    return 0;
}