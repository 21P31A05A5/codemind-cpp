#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0&&i%2==1)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"True"<<endl;
    }
    else
	cout<<"False"<<endl;
    return 0;
}
