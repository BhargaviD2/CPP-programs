#include<iostream>
using namespace std;
class Person
{
	string name;
	protected:
		int age;
	public:
		void get();
		void put();
};
void Person::get()
{
	cin>>name>>age;
}
void Person::put()
{
	cout<<name<<"\n"<<age;
}
class Student
{
	string degree;
	int CGPA;
	public:
		void getinfo();
		void display();
};
void Student::getinfo()
{
	cin>>degree>>CGPA;
}
void Student::display()
{
	cout<<degree<<"\n"<<CGPA;
}
class Marks: public Person,public Student
{
	
	public:
	    int Total;
		int M1,M2,M3;
		void getmarks();
		void total();
};
void Marks::getmarks()
{
	cin>>M1>>M2>>M3;
	
}
void Marks::total()
{
	Total=M1+M2+M3;
	cout<<Total;
}
class Address: public Person
{
	string city;
	int pincode;
	public:
		void getadd();
		void disp();
};
void Address::getadd()
{
	 cin>>city>>pincode;
}
void Address::disp()
{
	cout<<city<<"\n"<<pincode;
}
class Grade: public Marks
{
    public:
        char Grd;
        void calculate();
};
void Grade::calculate()
{
    if(Total>60)
    Grd=='C';
    else if(Total>70)
    Grd=='B';
    else if(Total>80 && Total<91)
    Grd=='A';
    else
    Grd=='S';
}
class Gradedisp: public Grade
{
    public:
        void gradeshow();
};
void Gradedisp::gradeshow()
{
    cout<<Grd;
}
class Attendance: public Grade
{
    public:
    void attend();
};
void Attendance::attend()
{
    if(Grd=='S')
    cout<<"You don't need to attend classes !!!!!";
    else
    cout<<"Attend claases!";
}
int main()
{
	 Address a;
	 Attendance A;
	 Gradedisp G;
	 a.get();
	 A.getinfo();
	 A.getmarks();
	 a.getadd();
	 a.put();
	 A.display();
	 A.total();
	 a.disp();
	 A.calculate();
	 G.gradeshow();
	 A.attend();
}
