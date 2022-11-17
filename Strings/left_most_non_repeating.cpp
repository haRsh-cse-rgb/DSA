#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// int leftMostNonRepeating(string &str){

    
//   for(int i=0; i<str.length() ; i++){
//     bool flag=false;
//     for(int j=0 ; j<str.length() ; j++){
//             if(str[i]==str[j] && i!=j){
//                 flag=true;
//                 break;
//             }
//     }
//     if(flag==false){
//         return i;
//     }
//   }
//   return -1;
// }



// int leftMostNonRepeating(string &str){

//  int count[256]={0};
//  for(int i=0 ; i<str.length(); i++){
//     count[str[i]]++;
//  }

//  for(int i=0; i<str.length() ;i++){
//     if(count[str[i]]==1){
//         return i;
//     }
//  }
//  return -1;

// }

int leftMostNonRepeating(string &str){
    int count[256];
fill(count , count+256 , -1);
    for(int i=0 ; i<str.length() ; i++){
        if(count[i]==-1){
            count[str[i]]=i;
        }
        else{
            count[str[i]]=-2;
        }
    }
       int result=INT_MAX;
    for(int i=0 ; i<256 ; i++){
        if(count[i]>=0){
           result=min(result,count[i]);
        }
    }
    if(result==INT_MAX){
        return -1;
    }
    else{
        return result;
    }
}


int main()
{

  string str="geeksforgeeks";

cout<<leftMostNonRepeating(str)<<endl;
    
    return 0;
}
