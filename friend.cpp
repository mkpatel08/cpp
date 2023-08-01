#include<iostream>
using namespace std;
class rect
{
    int l,b;
    friend rect add(rect , rect)
    public:
    void  setdata(int x,int y)
    {
        l = x,b = y;
    }
    void getdata()
    {
        cout<<"area is"<<l*b<<endl;
    if(x>y) && (x<y)
    {
        cout<<"it is the largest number"<<endl;
    }
    else
    {
        cout<<"it is not largest number"<<endl;
    }
    }
};
    rect add(rect x,rect y)
    {
        rect t;
        t.l = x.l + y.l ;
        t.b = x.b + y.b ;
        return t;
    }
    int main()
    {
        rect a,b,c;
        a.setdata(2,3);
        a.getdata();
        b.setdata(3,5);
        b.getdata();

        c = add(a,b);
        c.getdata();
    }