#include <iostream>
using namespace std;
class overload {
private:
int num;
public:
overload() :num(10){ } void operator -() //definition of operator overloading inside the class
{
num = num - 3;
}
void Display() //method to display the result/number
{
cout << "Number: " << num<<endl;
}
};
int main()
{
overload a;    //instantiation
-a;            // call operator function void operator -()
a.Display();   //invoke the display method
return 0;
}