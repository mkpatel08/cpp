#include<iostream>
using namespace std;
class test{
    int b,c;
    public:
    int a;
    void hello()
    {
        cout<<"hello"<<endl;
        b=1;
        cout<<"b:"<<b<<endl;
    }
};


int main()
{
    test z;
    z.a=10;
    cout<<"value of a is:"<<z.a<<endl;
    z.hello();
}