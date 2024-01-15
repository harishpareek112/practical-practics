//Can you find out the sum of the digits of a number?
#include<iostream>
using namespace std;
int main() {
    int num; 
    cout<<"Enter the digit:";
    cin>>num;
    int digit=num;
    int sum=0;
    while(num!=0)
    {
        sum = sum + (num%10);
        num = num/10;
        }
        cout<<"The sum of "<< digit <<" is "<<sum;
        return 0;
}