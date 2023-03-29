#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef struct {
    int age;
    string firstname,lastname;
    int std;
}student;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student s;
    cin>>s.age;
    cin.ignore();
    cin>>s.firstname;
    cin.ignore();
    cin>>s.lastname;
    cin>>s.std;
    cout<<s.age<<endl;
    cout<<s.firstname + ", "+ s.lastname<<endl;
    cout<<s.std;
    cout<<s.age<<" "<<s.firstname<<" "<<s.lastname<<" "<<s.std;   
    return 0;
}