#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    string rev;
    for(int i=0;i<str.size();i++){
       
       rev += str[str.size()-i-1];
    }   
    str +=rev;
    cout<<str<<endl;   
}