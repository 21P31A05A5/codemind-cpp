#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxn=INT_MAX;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        maxn=min(maxn,arr[i]);
    }
    cout<<maxn<<endl;
    return 0;
}