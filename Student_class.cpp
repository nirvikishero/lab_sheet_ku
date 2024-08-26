#include<iostream>
#include<string>
using namespace std;
class Student {
    private: 
    string name;
    int roll_no;
    string program;
    string email;
    public:
    void get_detail(){
        cout<<"Enter the roll no : ";
        cin>>roll_no;
        cin.ignore();
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the program : ";
        getline(cin,program);
        cout<<"Enter the email[example@mail.com] : ";
        getline(cin,email);
    }
    void display_details(){
        cout<<"Student Details : "<<endl<<"________________"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<roll_no<<endl;
        cout<<"Program enrolled : "<<program<<endl;
        cout<<"E-mail : "<<email<<endl;

    }
};
int main(){
    Student student;
    student.get_detail();
    student.display_details();
}