#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int a,d;
}t;
typedef struct{
    int v;
    char c;
}sv;
void input(t* array,int size){
    printf("a\td\n");
    for(int i=0;i<size;i++){
        scanf("%d %d",&array[i].a,&array[i].d);
    }
}
sv* sortt(t* array,int size){
    sv* var=(sv*)malloc(sizeof(sv)*size*2);
    for(int i=0;i<size;i++){
        var[i].v=array[i].a;
        var[i].c='a';
        var[size*2-1-i].v=array[i].d;
        var[size*2-1-i].c='d';
    }
    sv temp;
    for(int i=0;i<size*2-1;i++){
         printf("--%d %c\n",var[i].v,var[i].c);
        for(int j=0;j<(size*2-1-i);j++){
            printf("%d %c--\n",var[i].v,var[i].c);
            if(var[j].v>var[j+1].v){
                temp.v=var[j].v;
                temp.c=var[j].c;
                var[j].v=var[j+1].v;
                var[j].c=var[j+1].c;
                var[j+1].v=temp.v;
                var[j+1].c=temp.c;
            }
        }
    }
    return var;
}
void display(sv* arr,int size){
    for(int i=0;i<size*2;i++){
        printf("%d %c\n",arr[i].v,arr[i].c);
    }
}
int findmaxplatform(sv* var,int size){
    int max=0,temp=0;
    for(int i=0;i<size*2;i++){
        if(var[i].c=='a')   temp++;
        else temp--;
        if(temp>max) max=temp;
    }
    return max;
}
int main(){
    int size;
    printf("enter a size:");
    scanf("%d",&size);
    t* arr=(t*)malloc(sizeof(t)*size);
    input(arr,size);
    sv* var=sortt(arr,size);
    display(var,size);
    printf("value:%d",findmaxplatform(var,size));
}