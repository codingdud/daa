#include<stdlib.h>
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int** materix=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        *(materix+i)=(int*)malloc(n*sizeof(int));
    }
    //filling materix values >0
    for (int j = 0; j < m; j++){
        for(int i=0;i<n;i++){
            scanf("%d",(*(materix+j)+i));
        }
    }
    for (int j = 0; j < m; j++){
        for(int i=0;i<n;i++){
            printf("%p %d ",(*(materix+j)+i),*(*(materix+j)+i));
            
        }
    }
    return 0;
}