#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,rev=0,temp;
    cin>>a;
    temp=a;
    while(a!=0)
    {
        rev=(rev*10)+(a%10);
        a=a/10;
    }
    if(rev==temp)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    
}

