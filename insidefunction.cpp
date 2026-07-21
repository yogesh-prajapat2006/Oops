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
 void print(int marks){
    cout<<name<<" "<<rol<<" "<<cours<<" "<<marks<<" "<<endl;//cout<<this->name<<" "<<this->rol<<" "<<this->cours<<" "<<this->marks<<" "<<endl;
    cout<<marks<<endl;
 }
};
int main(){
    
    Student s1("yogesh",63,"b.tech",100);
    
    Student s2=s1;
    
    Student s3(s1);
    s3.name="yogesh prajapat";
    s1.print(132);
    s2.print(63);
    s3.print(44);

    return 0;
}