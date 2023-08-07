#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //write file
    char input[50];
    ofstream os;
    os.open("abc.txt");
    cout<<"writing to a text file:"<<endl;
    cout<<"please enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"please enter contacr number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();

    //read file
    ifstream is;
    string line;
    is.open("abc.txt");
    cout<<"reading from a text file:"<<endl;
    while(getline (is,line))
    {
        cout<<line<<endl;
    } 
    is.close();
    return 0;
}