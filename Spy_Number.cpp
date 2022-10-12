#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    int product=1;
    cin>>n;
    while(n!=0)
    {
        sum=sum+(n%10);
        product=product*(n%10);
        n=n/10;
    }
    if(product==sum)
    {
        cout<<"Spy Number";
    }
    else
    {
        cout<<"Not Spy Number";
    }
}

