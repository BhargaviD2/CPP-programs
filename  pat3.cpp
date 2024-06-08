//pat 3 Q

 #include<iostream>
 using namespace std;
 class read
 {
     int n,a[10][10],b[10][10],c[10][10];
     public:
     read()
     {
         int n=0;
         a[10][10]=0;
         b[10][10]=0;
     }
     void readM();
     void add();
 };
 void read::readM()
 {
     int i,j;
     std::cin>>n;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             this->a[i][j]=a[i][j];
             cin>>a[i][j];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             this->b[i][j]=b[i][j];
             cin>>b[i][j];
         }
     }
     
 }
 void read::add()
 {
     int i,j;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
         }
     }
    for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
            cout<<c[i][j]<<" ";
            //if(j==n-1)
            //cout<<"\t";
         }
         cout<<endl;
     }
 }
 int main()
 {
     read r;
     r.readM();
     r.add();
 }