#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setm(int a)
    {
        m = a;
    }
};
class test
{
    protected:
    int n;
    public:
    void setn(int z)
    {
        n = z;
    }
};
class derived : public base
{
    protected:
    int p;
    public:
    void setp(int z)
    {
        p = z;
    }
};

class ABC: public test,public derived
{
    public:
    void add()
    {
        cout<<"addition of m,n and p is:"<<m+n+p<<endl;
    }
};
int main()
{
    ABC a;
    a.setp(10);
    a.setm(50);
    a.setn(40);
    a.add();
}