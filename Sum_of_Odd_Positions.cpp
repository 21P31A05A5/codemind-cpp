#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int arr[n],k=0,j=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        j=j+arr[i];
        if(i==0 || i%2==0)
        {
            k=k+arr[i];
        }
    }
    cout<<j-k;
}