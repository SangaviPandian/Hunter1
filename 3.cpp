#include<iostream>
using namespace std;
int main()
{
    int n,a[n],i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==a[i])
        {
           cout<<a[i];
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"-1";
    }
}
