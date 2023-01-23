#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(10*sizeof(int));
    for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for ( int k =j+1; k <10; k++) 
                if((arr[i]+arr[j]+arr[k])==key){
                        printf("%d %d %d",i,j,k);

                }
        } 
    }       
}
    
