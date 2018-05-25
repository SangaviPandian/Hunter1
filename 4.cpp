#include<iostream>
using namespace std;
int main()
{
    int n,a[n],i,j,count;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                count++;
            }
        }
         if(count==0)
                {
                    cout<<a[i];
                }
        }
}
