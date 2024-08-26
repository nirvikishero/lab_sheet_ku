#include<iostream>
using namespace std;
class Civil {
    private:
    int year;
    int roll_num;
    string name;
    static string hod_name;
    public:
    void setter_method(int y , int roll,string nam){year= y;roll_num = roll;name = nam;}
    static void HOD(string n){ hod_name = n;}
    string getter_name(){return name;}
    int getter_roll(){return roll_num;}
    int getter_year(){return year;}
    static string getter_hodname(){return hod_name;}
};
string Civil::hod_name = "Nirvik Nepal";
int main(){
    int num;
    cout<<"Enter the number of student : ";
    cin>>num;
    Civil student[num];
    for (int i = 0 ; i < num ; i++){
        int roll = 0 , year = 0;
        string name;
        cout<<"Enter the year of student : ";
        cin>>year;
        cout<<"Enter the roll number : ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter the name : ";
        getline(cin,name);
        student[i].setter_method(year,roll,name);
    }
    for (int i = 0 ; i<num;i++){
        cout<<"Student "<<i+1<<" Details"<<endl<<"_________________"<<endl;
        cout<<"Name  : "<<student[i].getter_name()<<endl;
        cout<<"Roll no : "<<student[i].getter_roll()<<endl;
        cout<<"Year : "<<student[i].getter_year()<<endl;
        cout<<"HOD : "<<Civil :: getter_hodname()<<endl<<endl;
    }
    string newhod;
    cin.ignore();
    cout<<"Enter the name of New HOD : ";
    getline(cin,newhod);
    Civil::HOD(newhod);
    for (int i = 0 ; i<num;i++){
        cout<<"Student "<<i+1<<" Details"<<endl<<"_________________"<<endl;
        cout<<"Name  : "<<student[i].getter_name()<<endl;
        cout<<"Roll no : "<<student[i].getter_roll()<<endl;
        cout<<"Year : "<<student[i].getter_year()<<endl;
        cout<<"HOD : "<<Civil :: getter_hodname()<<endl<<endl;
    }
}