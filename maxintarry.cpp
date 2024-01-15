//Find the maximum number in an array of integers
#include<iostream>
using namespace std;
int main()
{
    int array[5]={10,30,40,50,20};
    for(int i=0; i<5; i++)
    {
        cout<<array[i]<<endl;
    }
    int max = array[0];
    for(int j=0;j<5;j++)
    {
        if(max < array[j])
        max = array[j];
        }
        cout << "The Maximum Number is :" << max ;

    return 0;

}