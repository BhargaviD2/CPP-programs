#include<iostream>
using namespace std;
class cars
{
    string brand,model,color;
    int price;
    static int count;
    public:
    cars()
    {
        count++;
    }
    void get_cars();
    void disp_details();
    void sort(cars obj[],int count);
};
int cars::count=0;
void cars::get_cars()
{
    cout<<"Enter Brand name: \n";
    cin>>brand;
    cout<<"Enter model name: \n";
    cin>>model;
    cout<<"Enter color: \n";
    cin>>color;
    cout<<"Enter price: \n";
    cin>>price;
    //count++;
}
void cars::sort(cars obj[],int count)
{
    int i,j;
    cars temp;
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(obj[i].price>obj[j].price)
            {
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }
    count++;
    
}
void cars::disp_details()
{
    cout<<brand<<"\n"<<model<<"\n"<<color<<"\n"<<price<<"\n";
}
int main()
{
    int n,i;
    cout<<"Enter number of cars:";
    cin>>n;
    cars obj[n];
    for(i=0;i<n;i++)
    {
    obj[i].get_cars();
    }
    obj[n].sort(obj,n);
    for(i=0;i<n;i++)
    {
        obj[i].disp_details();
    }
    return 0;
}