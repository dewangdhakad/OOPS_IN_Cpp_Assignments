#include<iostream>
using namespace std;
int main(){
    int basic_salary,da,ta,hra,gross_salary;
    cout<<"Enter the Basic salary: ";
    cin>>basic_salary;
    da=0.46*basic_salary;ta=0.08*basic_salary;hra=0.09*basic_salary;
    gross_salary=basic_salary+ta+da+hra;
    cout<<"Gross Salary: "<<gross_salary;
    return 0;
}
    