//Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…,      can you try to print the series upto n elements?
#include<iostream>
using namespace std;
int main() {
    int n, m,sum=0;
    cout<<"Enter starting number:";
    cin>>n;
    cout<<"Enter the last number:";
    cin>>m;
    for(int i=n;i<=m;i++) {
        cout<<n;
        n=n+n;
        cout<<n;
    }
    return 0;

}