#include<iostream>
using namespace std;
void multi(int a,int b)
{
cout<<a*b;

}
void add(int a,int b)
{
    cout<<(a+b);
}
void sub(int a,int b)
{
    cout<<(a-b);
}
int main()
{
int a,b;
cin>>a>>b;
add(a,b);
sub(a,b);
  multi(a,b);
cout<<"this is the outout";
return 0;
}
