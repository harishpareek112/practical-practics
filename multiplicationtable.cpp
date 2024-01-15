//Write a C++ program that takes a number as input and prints its multiplication table up to 10
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any numeber:";
    cin>>a;
    for(int i=1; i<=10; i++)
    {
        cout<<a*i<<endl;
    }
    return 0;

}