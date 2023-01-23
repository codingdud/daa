#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a length of array:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int m1,m2,c1,c2;
    m2=0;
        for(int i=0;i<n;i++){
            m1=arr[i];
            c1=0;
            c2=0;
            for(int j=i;j<n;j++){
                if(!arr[j]){
                if(m1==arr[j]){
                    c1++;
                }
                else{
                    if(!m2&&m1!=arr[j]){
                         m2=arr[j];
                    }
                    if(m2==arr[j]){
                        c2++;
                    }
                    else{
                        if(c1>c2){
                            c2=0;
                            m2=0;
                        }
                        else{
                            m1=m2;
                            c1=c2;
                            m2=0;
                            c2=0;
                        }
                    }
                }
                }

            }
            printf("%d %d\n",m1,c1);
            while(arr[i]==m1){
                arr[i]=0;
                i++;
            }
        }
    return 0;
}
