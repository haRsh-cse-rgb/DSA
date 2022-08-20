#include <iostream>
#include <list>
using namespace std;

struct hashi
{
    int bucket;
    list<int> *table;

    hashi(int x)
    {
        bucket = x;
        table = new list<int>[x];
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }

    void remove (int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }

    bool search(int key){
        int i=key%bucket;
        for(auto x : table[i]){
            if(x==key){
                return true;
            }
        }
        return false;
    }
    void displayHash();
};

void hashi ::  displayHash(){
    for(int i=0 ; i<bucket;i++){
         cout<<i;

         for(auto x : table[i]){
            cout<<" --> " <<x;
         }
            cout<<endl;
    }
}

int main()
{
int a[]={15,11,27,8,12};
int n=sizeof(a)/sizeof(a[0]);



hashi h(7);

for(int i=0 ; i<n; i++){
    h.insert(a[i]);
}

h.displayHash();
    return 0;
}
