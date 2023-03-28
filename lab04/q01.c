#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    time_t start,difference,t;
     double time_consumed;
    srand((unsigned) time(&t));

    start=clock();

    int step,length,x,l,h,m;
    printf("enter a length of array:");
    scanf("%d",&length);


    int* arr=(int*)malloc(length*sizeof(int));
    for(int i=0;i<length;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<length;i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
    //binery search
    x=rand() % length;
    lable:
    printf("\nenter a x value for best or worst case:");
    scanf("%d",&x);
    l=0,h=length;
    start=clock();
    step=0;
    while(l<=h){
        m=(l+h)/2;
        if(x<arr[m]) h=m-1;
        else if(x>arr[m]) l=m+1;
        else{
            printf("steps: %d ",step);
            difference=clock()-start;
            time_consumed = ((double)difference);
             printf("\ntime consumed:%f\n", time_consumed);
            break;
        }
        ++step;
    }
    if(x) goto lable;

    free(arr);
    

}

/* time_t start,difference;
    start=clock();
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]<current){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=current;
    }
    difference=clock()-start;
    double time_consumed = ((double)difference)/CLOCKS_PER_SEC;
    printf("%f\n", time_consumed);
 */
/* for{
free(a[i]);
}
free(a); */