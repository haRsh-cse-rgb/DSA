#include <iostream>
using namespace std;

bool rotationString(string &str1, string &str2)
{
    if(str1.length()!=str2.length()){
        return false;
    }
    string temp=str1+str1;
    return (temp.find(str2)!=string::npos);
}
    


int main()
{
    string str1 = "ABCD";
    string str2 = "CDAB";
    if (rotationString(str1, str2))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
