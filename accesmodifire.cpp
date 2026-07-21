#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    Student(string n,int r,float m){
        name=n;
        roll=r;
        marks=m;
    }
    void print(){
        cout<<roll<<"  "<<name<<" "<<marks;
    }
    void setmarks(float m){
        marks=m;
    }
    float getmarks(){
        return marks;
    }
    private:
    float marks;
};

int main(){
    Student s1("yogesh",65,98.04);
    //s1.print();kar sakte hai
    //cout<<s1.marks<<endl;nhi kar sakte lekin
    cout<<s1.getmarks()<<endl;//ase kar sakte hai
    s1.setmarks(99.6);// ase change kar sakte hai private memeber ko
    cout<<s1.getmarks()<<endl;
   return 0;
}
// 98.04
// 99.6