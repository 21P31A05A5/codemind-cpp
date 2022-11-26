#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=2;i<n-1;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])
        {
            c+=1;
        }
    }
    if(c==n-3)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}