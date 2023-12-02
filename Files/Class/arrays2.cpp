#include<iostream>
using namespace std;
class Sumarrays
{
private:
     int nums[5],i,sum=10;
public:
        void add(){
            for ( i = 0; i < 5; i++)
        {
            cout<<"Enter element at: "<< i <<endl;
            cin>>nums[i];
            sum=sum+nums[i];
        }
        cout<<"The sum of all the numbers in the array is: "<< sum <<endl;
    }
};
int main() {
    Sumarrays a;
    a.add();
    return 0;
}
