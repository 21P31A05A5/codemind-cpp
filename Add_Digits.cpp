#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cin>>num;
    while(num>0)
    {
        sum=sum+(num%10);
        num=num/10;
        if(num==0 && sum>9)
        {
            num=sum;
            sum=0;
        }
    }
    cout<<sum;
    
}