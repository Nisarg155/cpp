#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Write your code here */

class  Person{
short int age;

protected:
string gender,name;

public:

Person(string name = "",string gender = "" ,short int age = 0)
{
    this->age = age;

    if(gender != "male" || gender != "female")
    {
        this->gender = "other";
    }
    else{
        this->gender = gender;
    }
    this->name = name;
}

void print()
{
    cout<<name<<" "<<gender<<" "<<age<<" "; 
}
};


class Employee:public Person{
    int yearly_salary;

    protected:
    const string employee_since ;
    string employee_id = "E";
    string designation;
    string department;

    public:

    Employee(string name ="", string gender = "", short int age = 0, string department = "",string designation = "",const string employee_since = "",int yearly_salary = 0):Person(name,gender,age),employee_since(employee_since)
    {
        this->department = department;
        this->designation = designation;
        this->yearly_salary = yearly_salary;

        static int x = 1;
        this->employee_id = employee_id + to_string(x);
        x++;
    }

    void print(){
        cout<<employee_id<<" ";
        Person::print();
        cout<<department<<" "<<designation<<" "<<employee_since<<" "<<yearly_salary<<endl;

    }

    void increase(float percentage_increase)
    {
        yearly_salary = yearly_salary + float(yearly_salary)*percentage_increase/float(100);

    }

    void designation_check(string old ,string new_designation)
    {
        if(this->designation == old)
        {
            this->designation = new_designation;
        }
    }

    void salary_designation_check(string designation,float increase)
    {
        if(this->designation == designation)
        {
            this->increase(increase);
        }
    }

};

class Manager:public Employee{

    protected:

    Employee *direct_report[10];
    short int direct_report_count = 0;

    public:

    Manager(const Employee &e):Employee(e)
    {

    }
    void add_direct_report(Employee *employee_ptr)
    {
        direct_report_count++;

        direct_report[direct_report_count] = employee_ptr;

    }
    void print()
    {
        Employee::print();

      //  sort_fun();
        for (int i = 0; i < direct_report_count; i++)
        {
            direct_report[i]->print();
        }
    }


    void change_designation(string old_designation,string new_designation)
    {
        for (int i = 0; i < direct_report_count; i++)
        {
            direct_report[i]->designation_check(old_designation,new_designation);
        }
        
    }

    void increase_salary(string designation,float increase)
    {
        for (int i = 0; i < direct_report_count; i++)
        {
            direct_report[i]->salary_designation_check(designation,increase);

        }
        
    }



    
};






int main() {
    string name, gender, department, designation, employee_since;
    short age;
    int yearly_salary;
    cin >> name >> gender >> age >> department >> designation;
    cin >> employee_since >> yearly_salary;
    Employee employee(name, gender, age, department, designation,
                      employee_since, yearly_salary);
    Manager manager(employee);
    
    int direct_reports_count = 0;
    cin >> direct_reports_count;
    
    Employee *employee_ptr;
    for(int i = 0; i < direct_reports_count; i++) {
        getchar(); // removing newline from input buffer
        cin >> name >> gender >> age >> department >> designation;
        cin >> employee_since >> yearly_salary;
        employee_ptr = new Employee(name, gender, age, department,
                                    designation, employee_since,
                                    yearly_salary);
        manager.add_direct_report(employee_ptr);
    }
    
    getchar(); // Removing newline from input buffer
    string existing_designation, new_designation;
    cin >> existing_designation >> new_designation;
    manager.change_designation(existing_designation, new_designation);

    float increment_percentage;
    cin >> designation >> increment_percentage;
    manager.increase_salary(designation, increment_percentage);

    manager.print();
    
    return 0;
}
