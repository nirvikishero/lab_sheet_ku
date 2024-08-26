#include<iostream>
using namespace std;

inline int max(int a, int b){
    return (a>b) ? a : b; //ternary operator bhnxa yeslai condtion ?...:...
}
int main(){
    int a,b;
    cout<<"Enter the two number[a b] : ";
    cin>>a>>b;
    cout<<"The max of two number is : "<<max(a,b);
    return 0;
}