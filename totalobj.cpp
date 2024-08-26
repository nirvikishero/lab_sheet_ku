#include<iostream>
using namespace std;
class Object {
    private :
    static int object_num;
    public :
    Object(){
        object_num++;
    }
    static int getter_method(){
        return object_num;
    }

};
int Object :: object_num = 0;

int main(){
    Object q,w,e,r,t,y;
    cout<<"The object in total is : "<<Object::getter_method()<<endl;
}