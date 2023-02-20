#include<bits/stdc++.h>
using namespace std;
void key2_fun(string key2,char key1){
    if (key2.length() == 0)
    {
        return;
    }
    string s = {key1,key2[0]};
    cout<<s<<endl;
    key2_fun(key2.substr(1),key1);
    
}
void print_combination(string key1,string key2)
{
    if(key1.length() == 0 )
    {
        return ;
    }
    key2_fun(key2,key1[0]);
    print_combination(key1.substr(1),key2);
        
    
    
    
}
int main()
{
string keypad[] = {" ", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int key1,key2;
cout<<"Enter key 1 :- ";
cin>>key1;
cout<<"Enter key 2 :- ";
cin>>key2;
print_combination(keypad[key1-1],keypad[key2 - 1]);
return 0;
}