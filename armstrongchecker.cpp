//Write a C++ program to check whether a number is Armstrong number or not
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum+r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"number is armstrong number";
    }
    else
    cout<<"not armstrong number";

    return 0;
}