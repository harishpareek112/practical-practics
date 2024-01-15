//write a program in c++ to check wether a number is positive,nagative or zero
#include<iostream>
using  namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>0)
    {
        cout<<a<<" "<<"Is a positive number ";
    }
    else if(a==0)
    {
        cout<<a<<" "<<"is zero";
    }
    else{
        cout<<a<<" "<<"is a negative number";
    }
    return 0;

}