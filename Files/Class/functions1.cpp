#include<iostream> 
using namespace std; 
void swap(int a,int b) //parameters will be passed by value
{
int tmp; tmp = a; a = b; b = tmp; 
cout<<"Values after swap, first value= "<<a<<" and second value= "<<b<<endl;
}
int main()
{ int m, n; 
cout<<"Enter first value"<<endl; cin>>m; 
cout<<"Enter second value"<<endl; cin>>n; 
cout<<"values before swap: first value= "<<m<<" and second value="<<n<<endl; 
swap(m,n);// calling swap function by value 
return 0;
}