#include<iostream>
using namespace std;
int main()
{
    float per,total,sci,math,eng,guj,computer;
    cout<<"enter the marks:";
    cin>>sci;
    cout<<"enter the marks:";
    cin>>math;
    cout<<"enter the marks:";
    cin>>eng;
    cout<<"enter the marks:";
    cin>>guj;
    cout<<"enter the marks:";
    cin>>computer;
    total=sci+math+eng+guj+computer;
    cout<<"total"<<total;
    per=total/5;
    cout<<"\nper"<<per;
    if(per>75)
    {
        cout<<"\ngrade A";
    }
    else if(per>60)
    {
        cout<<"\ngarde B";
    }
    else if(per>45)
    {
        cout<<"\ngrade C";
    }
    else if(per>35)
    {
        cout<<"\ngrade d";
    }
    else
    {
        cout<<"\nfail";
    }
}