#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,sqr,len;
    cin>>n;
    sqr=n*n;
    string h=to_string(n);
    len=h.size();
    string str=to_string(sqr),s="";
    for(int i=str.size()-1;i>=len;i--)
    {
        s=s+str[i];
    }
    reverse(s.begin(),s.end());
    // cout<<s<<" "<<h<<endl;
    if(h==s)
    cout<<"Automorphic Number";
    else
    cout<<"Not an Automorphic Number";
    
}