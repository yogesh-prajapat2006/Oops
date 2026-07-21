#include<iostream>
using namespace std;
class Student{
public:
 string name;
 int rol;
 string cours;
 int marks;

};
int main(){
    Student s1;
    s1.rol=45;
    s1.name="yogesh prajapat";
    s1.cours="b.tech";
    s1.marks=100;

    Student s2;
    s2.rol=46;
    s2.name="yogesh";
    s2.cours="b.tec";
    s2.marks=90;

    cout<<s1.name<<" "<<s1.rol<<" "<<s1.cours<<" "<<s1.marks<<" "<<endl;
    cout<<s2.name<<" "<<s2.rol<<" "<<s2.cours<<" "<<s2.marks<<" "<<endl;

    return 0;
}