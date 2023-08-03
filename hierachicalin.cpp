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
class derived1 : public base
{
    int n;
    public:
    void setn(int z)
    {
        n = z;
    }
    void product()
    {
        cout<<"product of m and n is: "<<m*n<<endl;
    }
};

class derived2 : public base
{
    int p;
    public:
    void setp(int z)
    {
        p = z;
    }
    void add()
    {
        cout<<"additions of m nad p is "<<m+p<<endl;
    }
};
int main()
{
    derived1 d;
    d.setm(15);
    d.setn(6);
    d.product();

    derived2 z;
    z.setm(10);
    z.setp(20);
    z.add();
}