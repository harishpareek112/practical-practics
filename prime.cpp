// Can you check whether a number is prime numbe or not
#include<iostream>
using namespace std;
int main()
{
    int i;int n;
    cout<<"Enter any number:";
    cin>>n;
    for(i=2; i<=n-1; i++){
        if(n%i==0)
        {
            break;
        }
    }
    if(n==i)
    {
        cout<<"number is prime";
    }
    else
    {
        cout<<"number is not prime";
    }

    return 0;

}