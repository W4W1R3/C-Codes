#include<iostream>
using namespace std;
struct employee
{
char employee_number[10];
char name[30];
char department[30];
float gross_salary;
};
int main()
{int i; struct employee E[10];
for(i = 0; i < 10; i++)
{
cout << "\nEnter details of Employee " << i+1 << ":" << endl;
cout << "\nEnter Employee No: " << endl;;    cin >> E[i].employee_number;
cout << "Enter Name: " << endl;              cin >> E[i].name;
cout << "Enter Department: " << endl;        cin >> E[i].department;
cout << "Enter Gross Salary: " << endl;      cin >> E[i].gross_salary;
}
for(i = 0; i < 10; i++)
{
cout << "\nEmployee Details for employee " << i + 1 << " :" << endl;
cout << "\nEmployee No: " << E[i].employee_number << endl;
cout <<"Name: " << E[i].name << endl;
cout << "Department: " << E[i].department << endl;
cout << "Gross Salary: " << E[i].gross_salary << endl;
cout << "Net Salary: " << E[i].gross_salary - (0.2 * E[i].gross_salary) << endl;
}
return 0;
}