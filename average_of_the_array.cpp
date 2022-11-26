#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    float g,k=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        k=k+arr[i];
    }
    g=k/n;
    cout<<fixed<<setprecision(2)<<g;
    return 0;
}