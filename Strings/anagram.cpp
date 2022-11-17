#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// bool anagram(string &str , string &str1){
//     if(str.length()!=str1.length()){
//         return false;
//     }

//     sort(str.begin() , str.end());
//     sort(str1.begin() , str1.end());

//     return(str==str1);
// }

bool anagram(string &str , string &str1){
    if(str.length()!=str1.length()){
        return false;
    }
  int count[256]={0};
    for(int i=0 ; i<str.length() ; i++){
    count[str[i]]++;
    count[str1[i]]--;
    }
    for(int i=0 ; i<256 ; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}


int main()
{

    string str="aabca";
    string str1="acaba";

    if(anagram(str , str1)){
        cout<<"Yes its Anagram"<<endl;
    }
    else{
        cout<<"No its not Anagram"<<endl;
    }

    
    return 0;
}
