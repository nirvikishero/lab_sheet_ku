
#include<iostream>
using namespace std;

void swap_by_refernce(int& a , int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    cout<<"Before swap :  1 2 "<<endl;
    int a = 1, b= 2;
    swap_by_refernce(a,b);
    cout<<"After swap : "<<a<<" "<<b<<endl;
}