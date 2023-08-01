#include<iostream>
using namespace std;
class batman
{
    private:
    int becode;
    char name[20];
    int innings,notout,runs,batavg,calcavg;
    int batavg()
    {
        return runs/(innings-notout);
    }
    int readdata()
    {
        cout<<"enter becode number:"<<endl;
        cin>>becode;
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter innings number:"<<endl;
        cin>>innings;
        cout<<"enter notout number:"<<endl;
        cin>>notout;
        cout<<"enter runs:"<<endl;
        cin>>runs;

        batavg=calcavg();
    }

    int displaydata()
    {
        cout<<"batsman code"<<"/t"<<"batman name"<<"/t"<<"innings"<<"/t"<<"notout"<<"/t"<<"runs"<<"/t"<<"/t"<<"batavg"<<"/t"<<"calcavg"<<endl;
        cout<<becode<<"/t"<<name<<"/t"<<innings<<"/t"<<notout<<"/t"<<runs<<"/t"<<batavg<<"/t"<<calcavg<<endl;
    }
};
 
 int main()
 {
    batman t;
    t.readdata();
    t.displaydata();
 }