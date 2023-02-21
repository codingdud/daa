#include<stdio.h>
#include<stdlib.h>

typedef struct wv{
    int as,f;
}wv;
void sortwv(wv* obj,int len){
    wv temp;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(((obj+i)->f)>((obj+j)->f)){
                //display(obj,len);
                temp.as=obj[i].as;
                temp.f=obj[i].f;
                obj[i].as=obj[j].as;
                obj[i].f=obj[j].f;
                obj[j].as=temp.as;
                obj[j].f=temp.f;
               // display(obj,len);
            }
        }
    }
}

void display(wv* obj,int len){
    printf("display\n");
     for(int i=0;i<len;i++){
        printf("%d  %d\n",obj[i].as,obj[i].f);
    } 
}
void getvalues(wv* obj,int len){
    printf("w\tv\n");
     for(int i=0;i<len;i++){
        scanf("%d %d",&(obj+i)->as,&(obj+i)->f);
    } 
}
void selection(wv* obj,int len){
    printf("selected once\n");
    printf("%d  %d\n",obj[0].as,obj[0].f);
    int prev=0;
    for(int i=1;i<len;i++){
        if(obj[prev].f<=obj[i].as){
             printf("%d  %d\n",obj[i].as,obj[i].f);
             prev=i;
        }
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
    selection(obj,size);
}