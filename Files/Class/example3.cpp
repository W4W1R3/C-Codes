#include<iostream>
using namespace std;
const float PI=3.142;
class AREA{
	//public: const static float PI=3.142;//inside the class//PI is a constant
	private: float radius, area;
	public :
	 void calculate(){
		cout<<"Enter radius:"<<endl;
		cin>>radius;
		area=PI*radius*radius;
		cout<<"The result is:"<<area<<endl;
	}
};
int main(){
	AREA ar;
	ar.calculate();
	return 0;
}
