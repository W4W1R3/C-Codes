#include<iostream>
using namespace std;
int Sum(int num)
{ 
int currentSum;
if(num == 1) currentSum = num; else
currentSum = num + Sum(num-1);//Sum is calling itself
return(currentSum);
}
int main()
{ int x; 
for(x = 1; x <= 10; ++x) 
cout << "When x is " << x <<"then Sum(x) is " <<Sum(x) << endl; 
return 0;
}