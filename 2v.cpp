#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x value:";
    cin>>x;
    cout<<"enter y value:";
    cin>>y;
    if(x<2000 || x>3000)
    {
        cout<<"x"<<x;
    }
    if(y>100 && y<500)
    {
        cout<<"\ny"<<y;
    }
}