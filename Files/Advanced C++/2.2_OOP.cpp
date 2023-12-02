#include<iostream> using namespace std;
class Box
{
double width;
public:
Box();
friend void printWidth(Box box);
void setWidth( double x );
};
Box::Box()
{cout << "Intialize object...." << endl;}
void Box::setWidth( double x )
{width = x;}
void printWidth(Box box)
{cout<< "The width of the Box is : " <<box.width<<endl;}
int main()
{
Box box;
box.setWidth(30.0);
printWidth( box );
return 0;
}