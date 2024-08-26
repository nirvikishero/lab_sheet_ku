#include<iostream>
using namespace std;
int multiply (int a, int b){
    return a*b;
}
float multiply (float a, float b){
    return a*b;
}

int main(){
    cout<<"The product of 2 and 3 is : "<<multiply(2,3)<<endl;
    cout<<"The product of 2.3 and 2.0 is : "<<multiply(2.3f,2.0f)<<endl;

}