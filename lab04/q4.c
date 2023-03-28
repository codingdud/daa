#include <stdio.h>
const int MAX = 100;
void matrix(int m, int n, int a[][MAX])
{
    int val=1,k=0,l=0;
    while(k<m && l<n)
    {
        for(int i=l;i<n;i++)
            a[k][i]=val++;

        k++;
        for (int i=k;i<m;i++)
            a[i][n - 1] = val++;
        n--;
        if (k<m)
        {
            for (int i = n - 1; i >= l;i--)
                a[m - 1][i] = val++;
            m--;
        }
        if (l<n)
        {
            for (int i = m - 1; i >= k; i--)
                a[i][l] = val++;
            l++;
        }
    }
}
int main()
{
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[MAX][MAX];
    matrix(m,n,a);
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d\t ", a[i][j]);
        printf("\n");
    }
    return 0;
}