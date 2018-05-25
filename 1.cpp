#include<iostream>
using namespace std;
class Numbers
{
    public:
    int n,a[50],i,j,v,c;
    
    void get()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void repeat()
    {
        for(i=0;i<n;i++)
        {
            int c=0;
            for(j=i+1;j<n;j++)
            {
            if(a[j]==a[i])
            {
                c++;
             cout<<a[i]<<" ";
            }
            }
            
            }
    if(c==0)
    {
        cout<<"unique"<<endl;
    }
    }
    public:
    Numbers()
    {
        get();
        repeat();
    }
};
int main()
{
   Numbers obj; 
   return 0;
}

