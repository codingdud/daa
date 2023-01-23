#include<stdio.h>
#include<stdlib.h>
typedef struct dynamic
{
    int* arr,point,size;
}dynamic;
int insert(int val,dynamic ob){
    ob.arr[ob.point++]=val;
    return 1;
}
int remove(dynamic ob){
    if(ob.point>ob.size/2)
    {
        ob.point=ob.size/2;
        return 1;
    }
    return 0;
     
}
int main(){
    dynamic ob;
    scanf("%d",&ob.size);
    ob.point=0;
    ob.arr=(int*)malloc(ob.size*sizeof(int));
    int val;
    scanf("%d",&val);
    insert(val,ob);
    printf("%d",ob.arr[0]);
}