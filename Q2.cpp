//Find the second largest digit in a given characters of numbers
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a number string: ";
    getline(cin,str);
    int max=-1, smax=-1;
    for(int i=0;i<str.size();i++)
    {
        if((str[i]-48)>max){
            smax=max;
            max=str[i]-48;
        }
       else if((str[i]-48)>smax&&(str[i]-48)<max) smax=str[i]-48;
    }
    cout<<smax<<endl;
}