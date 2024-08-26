#include<iostream>
using namespace std;
class Number{
    public:
    int a,b;
    void input_num(){
        cout<<"Enter two number[a b]: ";
        cin>>a>>b;
    }
    void display_result(){
        cout<<"The sum of the two number : "<<a+b;
    }
};
int main(){
    Number n;
    n.input_num();
    n.display_result();
    return 0;
}