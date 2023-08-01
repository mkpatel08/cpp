#include<iostream>
using namespace std;
class rect
{
    int l,b;
    friend rect add(rect, rect, rect);
    public:
    void setData(int x,int y)
    {
        l = x,b = y;
    } 
    void getdata()
    {
        cout<<"area is: "<<l*b<<endl;
    }
};
    rect add(rect x,rect y,rect z)
    {
        rect t;
        t.l = x.l + y.l + z.l;
        t.b = x.b + y.b + z.b;
        return t;
    }
    int main()
    {
        rect a,b,c,d;
        a.setData(2,3);
        a.getdata();
        b.setData(4,5);
        b.getdata();
        d.setData(3,3);
        d.getdata();

        c =add(a,b,d);
        c.getdata();
    }