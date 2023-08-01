#include<iostream>
using namespace std;
class TEST
{
    private:
    int testcode,nocandidate,centerreqd;
    char description[100];
    int CALCNTR()
    {
        return (nocandidate/100+1);
    }

    public:
    int SCHEDULE()
    {
        cout<<"enter test code:";
        cin>>testcode;
        cout<<"enter nocandidate:";
        cin>>nocandidate;

        centerreqd=CALCNTR();
    }

    int DISPTEST()
    {
        cout<<"testcode"<<"/tdescription"<<"/tnocandidate"<<"/tcenteerreqd"<<endl;
        cout<<testcode<<"  "<<description<<"  "<<nocandidate<<"  "<<centerreqd<<"  "<<endl;
    }
};

    int main()
    {
        TEST t;
        t.SCHEDULE();
        t.DISPTEST();
    }