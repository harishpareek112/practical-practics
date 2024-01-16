//Find the factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n; int factorial=1;
    cout<<"Enter any number:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        factorial=n*factorial;
    }
    cout<<"\nFactorial of "<<n<<" is = "<<factorial;
    return 0;
}