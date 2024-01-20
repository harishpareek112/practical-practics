#include<iostream>
using namespace std;
class publication
{
    private:
    char publicer[20];
    protected:
    double price;
    public:
    void read()
    {
        cout<<"Enter the name of publicer:";
        cin>>publicer;
        cout<<"Enter the price of book:";
        cin>>price;
    }
    void show()
    {
        cout<<publicer<<endl<<price<<endl;
    }
};
class sales
{
    protected:
    double pub_sales;
    public:
    void read()
    {
        cout<<"Enter the number of pub_sales:";
        cin>>pub_sales;
    }
    void show()
    {
        cout<<pub_sales;
    }
};
class book:public sales ,public publication
{
    private:
    char author[20];
    long isbn;
    int pages;
    public:
    void read()
    {
        cout<<"enter the name of author:";
        cin>>author;
        cout<<"Enter the ISBN number:";
        cin>>isbn;
        cout<<"Enter the number of pages of book:";
        cin>>pages;
    }
    void show()
    {
        cout<<author<<endl<<isbn<<endl<<pages<<endl;
    }
    void cal_sal_amt()
    {
        double salamt;
        salamt=price*pub_sales;
        cout<<salamt;
    }
};
int main()
{
    book d1;
    d1.publication::read();
    d1.sales::read();
    d1.cal_sal_amt();
    return 0;
}
