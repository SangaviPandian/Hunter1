#include <iostream>
using namespace std;
int main() {
	int a[10],i,n,j,temp,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
            for(j=i+1;j<=n;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==0)
	    {
	        count++;
	    }
	}
	for(i=n;i>=1;i--)
	{
	    if(count==n)
	    {
	     cout<<a[i];
	     break;
	    }
	    else
	    {
	        cout<<a[i];
	    }
	}
return 0;
}
