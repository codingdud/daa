//using twod matex
#include<stdlib.h>
#include<stdio.h>
#include "queue.h"


int **graph;



void insertvertex(int v,int e){
    graph[v][e]=1;
}




void printgraph(int n){

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            if(i==0){
                printf("%d ",j);
            }
            else if(j==0){
                printf("%d ",i);
            }
            else
            printf("%d ",graph[i][j]);
            
        }
        printf("\n");        
    }
    
}


void bsf(){
    
}
int main(){
    int n;
    printf("enter a length of graph");
    scanf("%d",&n);
    graph=(int**)calloc(n+1,sizeof(int*));
    for(int i=0;i<=n;i++){
        graph[i]=(int*)calloc(n+1,sizeof(int));
    }
    printgraph(n);
    int v,e;
    lable:
    scanf("%d %d",&v,&e);
    insertvertex(v,e);
    if(v&&e) goto lable;
    printgraph(n);
    return 0;
}