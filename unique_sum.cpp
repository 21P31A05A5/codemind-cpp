#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // cout<<arr[i];
    }
    //printf("
");
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)
        {
            c=c+arr[i];
        }
    }
    cout<<c;
    return 0;
}