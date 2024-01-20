//Find the factorial of a number
#include<iostream>
using namespace std;
int factorial(int n){
    int f;
    if(n==0){
        return 1;
    }
    else
    {
    f=n*factorial(n-1);
    }
    return f;

}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin>>num;
    cout<<factorial(num);
    return 0;
}