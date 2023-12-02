#include<iostream>
using namespace std;
int max(int a, int b) //return by reference
{
if (a > b) 
return a; else
{
    return b;
}

}
int main()
{
int m, n;
cout<<"Enter the first value"<<endl;  cin>>m;
cout<<"Enter the second value"<<endl; cin>>n;
cout<<"The the max number is "<<max(m,n)<<endl;
}