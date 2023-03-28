#include<iostream>
using namespace std;
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
void swapTwo(int &x,int &y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}
void swapThree(int &a,int &b, int &c)
{
    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
}
void rearrangeArray(int a[], int n)
{
    int i;
    if (n%2==0)
    {
        for (i=0;i<n-1;i+=2)
        {
            swapTwo(a[i],a[i+1]);
        }
    }
    else
    {
        int i;
        for (i=0;i<n-3;i+=2)
        {
            swapTwo(a[i],a[i+1]);
        }
        swapThree(a[n-1],a[n-2],a[n-3]);
    }
    print(a, n);
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrangeArray(arr,n);
    return 0;
}