//late binding/overriding
 #include<iostream>
 using namespace std;
 class base
 {
     public:
     void display()
     {
         cout<<"This is base class\n";
     }
     void show()
     {
         cout<<"To show that this is base class\n";
     }
 };
 class derieved:public base
 {
     public:
     void display()
     {
         cout<<"This is derieved class\n";
     }
 };
 int main()
 {
     derieved dr;
     base &bs=dr;
     bs.display();
     dr.display();
     dr.show();
 }