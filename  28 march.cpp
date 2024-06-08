#include<iostream>
using namespace std;
class shape
{
    public:
    int h,w;
    void get();
};
void shape::get()
{
    cin>>h>>w;
}
class rect:virtual protected shape
{
    public:
    float are;
    
    void area();
};
void rect::area()
{
    get();
    are=h*w;
    cout<<"Are of the rectangle is:"<<are<<endl;
}
class tri:virtual protected shape
{
    public:
    float ar;
    
    void tarea();
};
void tri::tarea()
{
    get();
    ar=0.5*h*w;
    cout<<"Area of the triangle is:"<<ar<<endl;
}
class total:public rect,public tri
{
    float fig;
    public:
    void totarea();
};
void total::totarea()
{
   get();
   fig=ar+are;
   cout<<"Area of the figure is:"<<fig<<endl;
}
int main()
{
     total T;
     T.totarea();
}