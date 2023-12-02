#include<iostream>
using namespace std;
int main(void)
{
float age;
cout << "Enter you age:" << endl;
cin >> age; 
if (age >= 0&&age<=18) //first condition tested
{
cout << "Minor:" << endl;
}
else if (age >= 19 && age <= 35) //second condition tested
{
cout << "Young adult:" << endl;
}
else if (age >= 36) //last condition tested
{
cout << "Adult:" << endl;
}
else //after you have tested all the condition
{
cout << "Invalid value try again:" << endl;
}
}