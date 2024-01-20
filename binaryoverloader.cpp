#include <iostream>
using namespace std;
 
class Complex {
private:
    int real;
 
public:
    Complex()
    {
        real = 0;
    }
    Complex operator+()
    {
       real=real+2;
    }
    void print() { cout << real; }
};
 
int main()
{
    Complex c1;
    +c1;
    c1.print();
    return 0;
}