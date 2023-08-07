#include<iostream>
using namespace std;
template<class T>
void dipaly(T t1)
{
    cout<<"displaying template:"<<t1<<endl;
}
template<class x,class y>
void add(x a,y b)
{
    cout<<"addition is:"<<a+b<<endl;
}
//void Display(x a,y b)
//{
//    cout<<"Displaying template:"<<a<<"\t"<<b<<endl;
//}
int main()
{
   // display(200);
   // display(12.56);
   // display('G');
   // display('G',1.25);
   // display('x',25);
    add(2,5.25);
    add('a',5.25);
    return 0;
}