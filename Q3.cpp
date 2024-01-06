//In a string, output the no. of substrings containing vowels
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    string str;
    int ans=0,flag=0; //flag to count no of continous vowels.
    getline(cin,str);

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            flag++;
        }
        else{
            ans += pow(2,flag) - 1;
            flag=0;
        }
    }
    //else won't work if last char is a vowel,
    ans += pow(2,flag) -1;
    cout<<ans<<endl;
}
