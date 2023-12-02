#include<iostream>
using namespace std;
class Recursion
{
public:
void getNumber();
void Factorial(int num);
};
void Recursion::Factorial(int num)
    {
    int i = 1, p = 1;
    while(i<=num)
    {
    p = i * p;
    i++;
    }
    cout << "The factorial of number: " << num <<" is "<<p << endl;
    }
void Recursion::getNumber()
        {
        int num;
        cout << "Enter number to get factorial: " << endl;
        cin >> num;
        Factorial(num);
        }
int main()
            {
            Recursion num;
            num.getNumber();
            return 0;
}