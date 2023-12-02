#include<iostream> 
using namespace std;
class Student
{ 
    protected:
    int regno;
    char name;
    public:
    void details()
    {
        cout<< "ENTER THE STUDENT NAME :" << endl;
        cin>> name;
        cout<< "ENTER THE STUDENT REGISTRATION NUMBER: " <<endl;
        cin>> regno;

    }
};
class Exam:public Student
{
    protected: 
    int sub1,sub2,sub3,sub4,sub5,sub6;
    public:
    void getmarks()
    {
        cout<< "ENTER THE THE MARKS OF SUBJECT 1: " <<endl;
        cin>> sub1;
        cout<< "ENTER THE THE MARKS OF SUBJECT 2: " <<endl;
        cin>> sub2;
        cout<< "ENTER THE THE MARKS OF SUBJECT 3: " <<endl;
        cin>> sub3;
        cout<< "ENTER THE THE MARKS OF SUBJECT 4: " <<endl;
        cin>> sub4;
        cout<< "ENTER THE THE MARKS OF SUBJECT 5: " <<endl;
        cin>> sub5;
        cout<< "ENTER THE THE MARKS OF SUBJECT 6: " <<endl;
        cin>> sub6;
    }
};
class Result:public Exam
{
    protected:
    int total;
    public:
    void total()
    {
        total=sub1+sub2+sub3+sub4+sub5+sub6;
        cout<< "THE TOTAL MARKS RESULT IS: "<< total <<endl;
    }
};
int main()
{
    Student d;
    Exam r;
    Result t;
    d.details()
    r.getmarks();
    t.total();
    return 0;
}