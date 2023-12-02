#include<iostream>
using namespace std;
inline int sum(int a, int b)
{
return (a+b);
}
int main(void)
{
int m, n;
cout<<"Enter the first value"<<endl;
cin>>m;
cout<<"Enter the second value"<<endl;
cin>>n;
cout<<" The largest value is "<<sum(m,n)<<endl;
return 0;
}