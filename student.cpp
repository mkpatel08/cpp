#include<iostream>
using namespace std;
class student
{
    private:
    int admin;
    char name[20];
    float english,math,science,total;
    float ctotal()
    {
        return english+math+science;    
    }
    public:
    int takedata()
    {
            cout<<"enter admin number:"<<endl;
            cin>>admin;
            cout<<"enter name:"<<endl;
            cin>>name;
            cout<<"enter english marks:"<<endl;
            cin>>english;
            cout<<"enter math marks:"<<endl;
            cin>>math;
            cout<<"enter science marks:"<<endl;
            cin>>science;
            total=ctotal();
    }
   int showdata()
    {
        cout<<"admin"<<" "<<"name"<<" "<<"english"<<" "<<"math"<<" "<<"science"<<" "<<"total"<<endl;
        cout<<admin<<"     "<<name<<"    "<<english<<"     "<<math<<"    "<<science<<"      "<<total<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}