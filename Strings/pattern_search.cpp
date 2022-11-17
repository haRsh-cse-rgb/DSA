#include <bits/stdc++.h>
using namespace std;

void findSubString(string &str, string &substr)
{

    int n = str.length();
    int m = substr.length();

    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
        {

            if (substr[j] != str[i + j])
                break;
        }
        
        if (j == m)
        {
            cout << i << " " << endl;
        }
        if(j==0){
            i++;
        }
        else{
            i=(i+j);
        }
        
    }
}
// void findSubString(string &str, string &substr)
// {

//     int n = str.length();
//     int m = substr.length();

//     for (int i = 0; i <= n - m; i++)
//     {
//         int j;
//         for (j = 0; j < m; j++)
//         {

//             if (substr[j] != str[i + j])
//                 break;
//         }
//         if (j == m)
//         {
//             cout << i << " " << endl;
//         }
//     }
// }

int main()
{
    string str = "ABABABCD";
    string substr = "ABAB";
    findSubString(str, substr);
    return 0;
}
