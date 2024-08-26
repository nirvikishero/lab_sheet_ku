#include<iostream>
using namespace std;
void swap_by_pointer(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a= 2,b = 3;
    cout<<"before swap : 2 3"<<endl;
    
    swap_by_pointer(&a,&b);
    cout<<"After swap : "<<a<<" "<<b;

}