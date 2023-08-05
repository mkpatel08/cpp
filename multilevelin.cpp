#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enetr a:";
        cin>>a;
    }
};
class test : public base 
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter b:";
        cin>>b;
    }
};
class derived : public test 
{
    public:
    void product()
    {
        cout<<"product of a and b is:"<<a*b<<endl;
    }
};
int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}