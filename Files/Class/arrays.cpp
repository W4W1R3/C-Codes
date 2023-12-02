#include<iostream>
using namespace std;
class GetArray{
public:
    int n[10],i;
    void get(){
for ( i = 0; i < 10; i++)
{
    n[i]=i+100;
}
    }
    void array(){
            for ( i = 0; i < 10; i++)
            {
                cout<<"Element at: "<< i <<"= "<<n[i]<<endl;
                       }
    }

};
int main(){
    GetArray g;
    g.get();
    g.array();
    return 0;
}
