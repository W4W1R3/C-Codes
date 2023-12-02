#include<iostream>
using namespace std;
class arrayjams
{
private: 
int j,i,a=8;
public:
void jams(){
for ( i = 0; i < 1; i++)
{
    for (j = 0; j < i; j++)
    {
        cout<<"*"<<endl;
    }
   cout<<"*"<<endl; 
} 
} 
};
int main(){
    arrayjams y;
    y.jams();
    return 0;
}

