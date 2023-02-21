#include<stdio.h>
#include<stdlib.h>

typedef struct wv{
    int w,v;
    int f;
}wv;
void sortwv(wv* obj,int len){
    wv temp;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(((obj+i)->f)<((obj+j)->f)){
                //display(obj,len);
                temp.f=obj[i].f;
                temp.w=obj[i].w;
                temp.v=obj[i].v;
                obj[i].f=obj[j].f;
                obj[i].w=obj[j].w;
                obj[i].v=obj[j].v;
                obj[j].f=temp.f;
                obj[j].w=temp.w;
                obj[j].v=temp.v;
               // display(obj,len);
            }
        }
    }
}
void calculatefraction(wv* obj,int len){
    for(int i=0;i<len;i++){
        obj[i].f= obj[i].v/obj[i].w;
    }
}
void display(wv* obj,int len){
    printf("display\n");
     for(int i=0;i<len;i++){
        printf("%d  %d  %d\n",obj[i].v,obj[i].w,obj[i].f);
    } 
}
void getvalues(wv* obj,int len){
    printf("w\tv\n");
     for(int i=0;i<len;i++){
        scanf("%d %d",&(obj+i)->w,&(obj+i)->v);
        (obj+i)->f=(obj+i)->v/(obj+i)->w;
    } 
}
void maxprofit(wv* obj,int len,int k){
    int i=0;
    int sum=0;
    printf("max profite\n");
    while(obj[i].w<k){
        k=k-obj[i].w;
        printf("%d %d\n",obj[i].w,obj[i].v);
        sum=sum+obj[i].v;
        i=i+1;
    }
    if(k>0&&i>=0){
        sum=sum+k*obj[i].f;
        printf("%d %d\n",k,k*obj[i].f);
        printf("sum=%d",sum);
    }

}
int main(){
    int size;
    scanf("%d",&size);
    wv* obj=(wv*)malloc(size*sizeof(wv));
    getvalues(obj,size);
    display(obj,size);
    sortwv(obj,size);
    display(obj,size);
    printf("enter k value:");
    int k;
    scanf("%d",&k);
    maxprofit(obj,size,k);
}