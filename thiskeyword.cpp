#include<iostream>
using namespace std;
class Student{
public:
 string name;
 int rol;
 string cours;
 int marks;

 Student (string name, int rol, string cours, int marks){//constructor this keyword uses
   this->name=name;
   this->rol=rol;
   this->cours=cours;
   this->marks=marks;
 }
};
int main(){
    Student s1("yogesh",63,"b.tech",100);
    
     Student s2=s1;

    Student s3(s1);
    s3.name="yogesh prajapat";

    cout<<s1.name<<" "<<s1.rol<<" "<<s1.cours<<" "<<s1.marks<<" "<<endl;
    cout<<s2.name<<" "<<s2.rol<<" "<<s2.cours<<" "<<s2.marks<<" "<<endl;
    cout<<s3.name<<" "<<s3.rol<<" "<<s3.cours<<" "<<s3.marks<<" "<<endl;
    
    return 0;
}