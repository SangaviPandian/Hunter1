#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[50];
    cin>>a;
    int l;
    l=strlen(a);
    int n=l+1;
    int b[n],i;
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
    b[0]=1;
    b[1]=1;
    for(i=2;i<n;i++)
    {
        if(a[i-1]>'0')
        {
            b[i]=b[i-1];
        }
        if(a[i-2]=='2'&&a[i-1]<'7'||a[i-2]<'2')
        {
            b[i]=b[i]+b[i-2];
        }
    }
    cout<<b[l];
}
