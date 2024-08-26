#include<iostream>
using namespace std;
class Destructor{
    public:
    char a;
    Destructor (char b){
        a = b;
        cout<<"Constructor called of : "<<a<<endl;
    } 
    ~Destructor(){
        cout<<"Destructor called of  : "<<a<<endl;
    }
};
int main(){
    Destructor a('a');
    Destructor b('b');
}