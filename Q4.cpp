//Anagram or not
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="car",t="rat";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"THey are anagrams "<<endl;
    else cout<<"THey are not anagrams "<<endl;

}