#include<iostream>
using namespace std;
int main(void)
{
    int floor; 
    cout << "Enter the floor number:" << endl; 
    cin >> floor; 
    switch (floor)
    { 
        case 0:
        cout << "This is the ground floor:" << endl;
        break; case 1:
        cout << "This is the first floor:" << endl;
        break; case 2:
        cout << "This is the second floor:" << endl;
        break; default:
        cout << "The value you have entered is wrong try again:" << endl;
    }
    return 0;
}