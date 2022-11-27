#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    int avg,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/n;
   // cout<<avg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            count=count+1;
        }
    }
    cout<<count;
}