#include<iostream>
#include<algorithm>
#include<string>

using namespace std;



bool subSequence(string &str , string &str1){
int j=0;
for(int i=0 ; i<str.length() && j<str1.length() ; i++){
  if(str[i]==str1[j]){
    j++;
  }
}


return (j==str1.length());

}

int main()
{

    string str="abba";
    string str1="ab";

    if(subSequence(str , str1)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
   
    return 0;
}
