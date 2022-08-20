#include<iostream>
using namespace std;

struct Myhash{
    int *arr;
    int cap,size;
    Myhash(int c){
        cap=c;
        size=0;
        for(int i=0; i<cap ; i++){
            arr[i]=-1;
        }
    }

    int hash(int key){
        return key%cap;
    }

    bool search(int key){
       int h=hash(key);
       int i=h;
       while(arr[i]!=-1){
        if(arr[i]==key){
            return true;
        }
        i=(i+1)%cap;
        if(i==h){
            return false;
        }
       }
      return false;
    }

    bool insert(int key){
        if(size==cap){
            return false;
        }
        int i=hash(key);
        while(arr[i]!=-1 || arr[i] !=-2 || arr[i]!= key){
            i=(i+1)%cap;
        }
        if(arr[i]==key){
            return false;
        }
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }

    bool erase(int key){
       int h=hash(key);
       int i=h;
       while(arr[i]!=-1){
        if(arr[i]==key){
            arr[i]=-2;
            return true;
        }
        i=(i+1)%cap;
        if(i==h){
            return false;
        }
       }
      return false;
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};  
    int main()
    {

        // Myhash h(7);
        // h.insert(5);
        // h.insert(53);
        // h.insert(41);
        // h.insert(7);
        // h.insert(1);
        // h.display();
        cout<<"HII"<<endl;
        
        return 0;
    }
    
