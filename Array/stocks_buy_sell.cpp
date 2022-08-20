#include<iostream>
#include<vector>
using namespace std;

int profit(vector<int> vec){
    int profi=0;
    for(int i=1; i<vec.size(); i++){
        if(vec[i]>vec[i-1]){
            profi+=vec[i]-vec[i-1];
        }
    }

return profi;
}

int main()
{

    vector<int> vec;
    int size,element;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>element;
        vec.push_back(element);
    }
    cout<<profit(vec);
    
    return 0;
}
