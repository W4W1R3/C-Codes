#include<iostream>
using namespace std;
class break_and_continue
{
private:
    int a,i;
public:
    void breakandcontinue(){
        cout<<"Enter the value of a: "<<endl;
        cin>>a;
        for ( i = 0; i < a; i++){
        if(i==4){
            continue;
        }
        cout<<"hello"<<endl;
        }
  cout<<"hi"<<endl;  
    }    
};
int main(){
    break_and_continue r;
    r.breakandcontinue();
    return 0;
}