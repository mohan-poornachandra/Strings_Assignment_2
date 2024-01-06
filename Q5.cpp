//Print the lexographically largest word in a sentence.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    string temp;
    vector<string> v;
    stringstream s(str);

    while(s>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;

    //Method without using string stream

    string mx="",word="";

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ') {
            mx = max(mx,word);
            word="";
        } 
        else
        word+=str[i];
    }
    mx = max(mx,word);

    cout<<mx<<endl;


}