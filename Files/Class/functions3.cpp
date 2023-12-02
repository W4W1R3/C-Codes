#include<iostream> 
using namespace std;
float area(float l, float w ) //the formal parameters are l and w
{
return
(l*w);
}
float area(float r ) //the formal parameter is r
{
return
(3.142*r*r); 
}
int main()
{ float
length,width,radius;
cout<<"Enter the length"<<endl; cin>>length;
cout<<"Enter the width"<<endl;  cin>>width;
cout<<"Enter radius"<<endl;     cin>>radius;
cout<<"The area of a circle "<<area(radius)<<endl;
cout<<"The area of a rectangle "<<area(length,width)<<endl;
return 0;
}