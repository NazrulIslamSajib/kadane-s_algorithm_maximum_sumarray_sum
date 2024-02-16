#include<bits/stdc++.h>
using namespace std;
long long arr[1000010],i;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long current=0,max1=INT_MIN;
        for(i=1;i<=n;i++)
        {
            current=current+arr[i];
            max1=max(current,max1);
            if(current<=0)
            {
                current=0;
            }
        }
        cout<<max1<<endl;
    }
    return 0;
}
