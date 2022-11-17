#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool anagram(string &str , string &str1 , int i){
    
  int count[256]={0};
    for(int j=0 ; j<str1.length() ; j++){
    count[str1[j]]++;
    count[str[i+j]]--;
    }
    for(int j=0 ; j<256 ; j++){
        if(count[j]!=0){
            return false;
        }
    }
    return true;
}

bool isPresent(string &str , string &str1){

int n=str.length();
int m=str1.length();

for(int i=0 ; i<=n-m ; i++){
  if(anagram(str,str1,i)){
    return true;
  }
}

return false;

}




int main()
{

    string str="geeksforgeeks";
    string str1="geeks";

    if(isPresent(str , str1)){
        cout<<"Yes its Present"<<endl;
    }
    else{
        cout<<"No its not Present"<<endl;
    }

    
    return 0;
}
