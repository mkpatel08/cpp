#include<iostream>
using namespace std;
class base1
{
    public:
    int a;
    void number1()
    {
        cout<<"enter value a:";
        cin>>a;
    }
};
class base2
{
    public:
    int b;
    void number2()
    {
        cout<<"enter valueb:";
        cin>>b;
    }
};
class derived : public base1, public base2
{
    public:
    int fact=1,i;
    void factorial()
    {
        for(i=a;i<=b;i++)
        {
            fact*=i;
        }
        cout<<fact<<"/t";
    }
};
int main()
{
    derived d;
    d.number1();
    d.number2();
    d.factorial();
}