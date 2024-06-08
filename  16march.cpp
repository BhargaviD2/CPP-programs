#include<iostream>
using namespace std;
class ABC
{
    int num1,num2;
    public:
        ABC()
        {
            num1=0;
            num2=0;
        }
        ABC(int num1,int num2)
        {
            this->num1=num1;
            this->num2=num2;
        }
        void add();
        void sub();
        friend class DEF;
        friend  void divide(ABC& obj);
};
void ABC::add()
{
    cout<<num1+num2<<"\n";
}
void ABC::sub()
{
    cout<<num1-num2<<"\n";
}
void divide(ABC& obj)
{
    cout<<obj.num1/obj.num2;
}
class DEF
{
    int x;
    public:
        DEF()
        {
            int x=0;
        }
        DEF(int x)
        {
            this->x=x;
        }
        void mul(ABC&);
        void prime();
};
void DEF::prime()
{
    int i;
    //cin>>x;
    for(i=2;i<x/2;i++)
    {
       if(x%i==0){
           cout<<"not prime"<<"\n";
           break;
       }  
       else
       {
           cout<<"prime"<<"\n";
           break;
       }
    }
}
void DEF::mul(ABC& M)
{
    cout<<M.num1*M.num2<<"\n";
}
int main()
{
    ABC obj1(10,20);
    obj1.add();
    obj1.sub();
    DEF obj2;
    obj2.mul(obj1);
    obj2.prime();
    divide(obj1);
}