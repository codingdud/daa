#include <stdio.h>
#include<limits.h>
#define INF 999999999

long int m[20][20];
int s[20][20];
int p[20],i,j,n;

void print_optimal(int i,int j)
{
if (i == j){
printf(" A%d ",i);
}
else
   {
      printf("( ");
      print_optimal(i, s[i][j]);
      print_optimal(s[i][j] + 1, j);
      printf(" )");
   }
}

void matrix_multiply(void)
{
long int q;
int k;
for(i=n;i>0;i--){
 
   for(j=i;j<=n;j++){
    
     if(i==j)
       m[i][j]=0;
     else
       {
        for(k=i;k<j;k++)
        {
         q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
         if(q<m[i][j])
          {
            m[i][j]=q;
            s[i][j]=k;
          }
         }
        }
      }
 }
}


void main(){

int k;
printf("Enter the no. of elements: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
{
 m[i][i]=0;
 m[i][j]=INF;
 s[i][j]=0;
}

printf("\nEnter the dimensions: \n");
for(k=0;k<=n;k++)
{
 printf("P%d: ",k);
 scanf("%d",&p[k]);
}

matrix_multiply();
i=1,j=n;
printf("\nMultiplication Sequence : ");
print_optimal(i,j);


}