#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,m,n;
    cin>>n;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(j=0;j<n-2;j++){
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
    }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
