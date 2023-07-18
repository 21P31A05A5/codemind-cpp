#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=n;
    int rev=0;
        
        while(n>0){
            int r=n%10;
               rev=rev*10+r;
            n=n/10;                              //211
            
        }
        int i=1;
        int s1=0;
        while(rev>0){
            int r=rev%10;
            s1=s1+pow(r,i);
            rev=rev/10;
            i++;
        }
        if(s==s1){
            cout<<("True");
        }else{
            cout<<("False");
        }
}