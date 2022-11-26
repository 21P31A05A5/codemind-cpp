#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            p=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]%2==1)
        {
            q=i;
            break;
        }
    }
    for(int i=p;i<q;i++)
    {
        if(arr[i]%2==0)
        {
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}
