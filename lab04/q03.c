#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
int main(){
    time_t start,difference,t;
    srand((unsigned) time(&t));


    int length,max,min,flag=2;
    double time_consumed;
    printf("enter a length of array:");
    scanf("%d",&length);

    double* plot=(double*)malloc(flag*sizeof(double));
    lable:
    start = clock();

    int* arr=(int*)malloc(length*sizeof(int));
   
    
    for(int i=0;i<length;i++){
        arr[i]=rand()%length;
    }
    //print all values for verification 
     printf("\nvalues: ");
    for(int i=0;i<length;i++){
       printf("%d ", arr[i]);
    }
    //find max min in array
    max=min=arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("\nmax\t%d min\t%d\n",max,min);

    difference=clock()-start;
    time_consumed = ((double)difference);
    plot[flag-1]=time_consumed;

    length=pow(length,2);
    free(arr);
    if(--flag) goto lable;
    

    //plot graph
    double sum=0;
    int p;
    for(int i=9;i>=0;i--){
        sum=sum+plot[i];
    }
    for(int i=9;i>=0;i--){
        //printf(" %f \v ",plot[i]);
        p=plot[i]/sum*100;
        for(int j=0;j<p;j++){
            printf("/");
        }
        printf("==%f\n",plot[i]);
    }
    free(plot);

    difference=clock()-start;
    time_consumed = ((double)difference);
    printf("\n%f\n", time_consumed);

}