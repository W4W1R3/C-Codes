#include<iostream>
using namespace std;
class SEQ{
                private:
                int a,b;//local variables  
                public:
                void show(){
                    a=6;
                    b=8;
                    cout<<"Before Swapping:";
                    cout<<"a="<<a<<" b="<<b<<endl;
                    a=a+b;
                    b=a-b;
                    a=a-b;
                    cout<<"After Swapping:";
                    cout<<" a="<<a<<"  b="<<b<<endl;
                };
        };          
int main(){
SEQ s;
s.show();
return 0;
}