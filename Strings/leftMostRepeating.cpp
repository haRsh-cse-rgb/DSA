#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// int leftMostRepeating(string &str){

    
//   for(int i=0; i<str.length() ; i++){
//     for(int j=i+1 ; j<str.length() ; j++){
//             if(str[i]==str[j]){
//                 return i;
//             }
//     }
//   }
//   return -1;
// }

int leftMostRepeating(string &str){

 int count[256]={0};
 for(int i=0 ; i<str.length(); i++){
    count[str[i]]++;
 }

 for(int i=0; i<str.length() ;i++){
    if(count[str[i]]>1){
        return i;
    }
 }
 return -1;

}




int main()
{

  string str="abb";

cout<<leftMostRepeating(str)<<endl;
    
    return 0;
}
