#include<iostream> 
using namespace std; 
void swap(int *a, int *b)
//the formal parameters are pointers a and b to store addresses
{
int tmp; //declare temp variable
tmp= *a; //assign the address of a to temp
*a = *b; //assign address of b to a
*b = tmp; //assign the value of temp to b(swap value)
cout<<"Values after swap are "<<*a<<" and "<<*b<<endl;//prints the swapped values
}
int main()
{
int m, n;
cout<<"Enter the first value"<<endl;   cin>>m;
cout<<"Enter the second value"<<endl;  cin>>n;
cout<<"Values before swap "<<m<<" and "<<n<<endl;
swap(&m, &n); // calling swap function by reference
return 0;
}