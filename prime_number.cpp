#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k=1;
        }
    }if(k==0)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not a prime";
    }
    
}

