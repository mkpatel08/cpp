#include<iostream>
uisng namespace std;
class hello
{
    int sci,comp,english,total;
    float per;
    public:
    void setdata()
    {
        cout<<"enter sci: ";
        cin>>sci;
        cout<<"enter comp:";
        cin>>comp;
        cout<<"enter english:";
        cin>>english;
    }
    void getdata()
    {
        total=sci+comp+english;
        cout<<"\t total marks:"<<total<<endl;
    }
    void percent()
    {
        per=total*100/300;
        cout<<"\t per:"<<per<<endl;
    }
};
int main()
{
    hello a[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"student"<<i+1<<endl;
        a[i].setdata();
    }
    for(i=0;i<3;i++)
    {
        cout<<"student"<<i+1<<endl;
        a[i].getdata();
        a[i].percent();
    }
}