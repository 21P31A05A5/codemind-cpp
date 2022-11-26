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
    int c=0;
    for(int i=0;i+2<n;i++)
    {
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
        c++;
    }
    cout<<c;
    return 0;
}
