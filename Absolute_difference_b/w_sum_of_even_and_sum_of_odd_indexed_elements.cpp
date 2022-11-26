#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],k=0,j=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0 || i%2==0)
        {
            k=k+arr[i];
        }
        else
        {
            j=j+arr[i];
        }
    }
    cout<<k-j;
    return 0;
}