#include<iostream>
#include<stack>


using namespace std;

void stockSpanProblem(int arr[] , int size){

    stack<int> s;
    s.push(0);
    cout<<"1"<<" ";
    for(int i=1 ; i<size ; i++){
        while(s.empty()==false && arr[s.top()] <= arr[i]){
            s.pop();
        }
        int span=s.empty()? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }

}

int main()
{

    int arr[]={60 , 10 , 20 , 40 , 35 , 30 , 50 , 70};
    int size =sizeof(arr)/sizeof(arr[0]);
    stockSpanProblem(arr , size);

    
    return 0;
}
