#include<stdio.h>
#include<stdlib.h>
typedef struct dynamic
{
    int* arr,point,size;
}dynamic;
int insert(int val,dynamic *ob){
     
    int p=ob->point++;
    while(p>=0&&ob->arr[p]<val){
        ob->arr[p+1]=ob->arr[p];
        p--;
    }
    ob->arr[p+1]=val;
    return 1;
}
int removhalf(dynamic ob){
    if(ob.point>ob.point/2)
    {
        ob.point=ob.size/2;
        return 1;
    }
    return 0;
     
}
int main(){
    dynamic ob;
    printf("enter size of arrray:");
    scanf("%d",&ob.size);
    ob.point=0;
    ob.arr=(int*)calloc(ob.size,sizeof(int));
    // printf("%d",ob.arr[0]);
    int val;
    printf("enter values..\n:");
     line:
    scanf("%d",&val);
    insert(val,&ob);
    if(val) goto line;
    for(int i=0;i<ob.point-1;i++){
        printf("%d ",ob.arr[i]);
    }
}