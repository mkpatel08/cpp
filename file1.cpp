#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream abc("a.txt");
    if(abc.is_open())
    {
        abc<<"welcome to skillqode";
        abc<<"\nwe started new lab";
        abc<<"\nwe started new branch";
        abc<<"\nwe complete CPP";
        abc.close();
    }
    else
        cout<<"File opening is fail.";
    return 0;
}