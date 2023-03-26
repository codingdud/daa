#include "heap.h"
#include<time.h>
void heapsort(int i){
    if(i) maxhipyfie();
    else minhipyfie();
    while(0<cursor){
        printf("%d ",deleate(i));
    }
}
int main(){
    time_t t;
    srand((unsigned) time(&t));
    printf("enter a length of array:");
    int n;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
       arr[++cursor]=rand()%n;
    }
    //display();
    heapsort(0);
    
}