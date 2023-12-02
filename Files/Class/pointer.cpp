// Source code to display value in address pointed */
#include<iostream>
using namespace std;
int main(void)
{
int x = 3; // declare and initialize x
int *p;// declare pointer variable
p = &x; //assign address of the variable to pointer variable
cout <<"address of x = "<< &x << endl;
cout << "address stored in p = " << p << endl;
cout << "the value of *p = "<< *p << endl;
}