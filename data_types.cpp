#include <iostream>
using namespace std;

int main()
{
    
    int employee_id,working_hours,salary_per_hour;
    int total_salary;
    cout<<"Input the Employee Id: "<<endl;
    cin>>employee_id;
    cout<<"Input the Working hrs: "<<endl;
    cin>>working_hours;
    cout<<"Salary amount/hr: "<<endl;
    cin>>salary_per_hour;
    total_salary=working_hours*salary_per_hour;
    cout<<"\nEmployee ID = "<<employee_id;
    cout<<"\nSalary = "<<total_salary;
    return 0;
}