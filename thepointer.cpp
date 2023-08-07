#include<iostream>
using namespace std;
class bank
{
    int bal;
    string name;
    string type;
    public:
    void setdata(int bal,string name,string type)
    {
        this->bal=bal;
        this->name=name;
        this->type=type;
    }
    void getdata()
    {
        cout<<"accout holder name is "<<name<<endl;
        cout<<"accout type is "<<type<<endl;
        cout<<"accout balance is "<<bal<<endl; 
    }
};
int main()
{
    bank b;
    b.setdata(1000,"hello","saveing");
    b.getdata();
}