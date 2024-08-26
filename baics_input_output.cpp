#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    string name;
    float percentage;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the Percentage : ";
    cin>>percentage;
    cin.ignore();
    cout<<"Enter the name : ";
    getline(cin,name);

}