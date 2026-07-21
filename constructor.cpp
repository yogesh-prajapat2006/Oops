#include<iostream>
using namespace std;
class Student{
public:
 string name;
 int rol;
 string cours;
 int marks;

 Student (string n, int r, string c, int m){//constructor
    name=n;
    rol=r;
    cours=c;
    marks=m;

 }

};
int main(){
    Student s1("yogesh",63,"b.tech",100);
    // 1.rol=45;  //vese ase dena padta hai bina constructor ke
    // s1s.name="yogesh prajapat";
    // s1.cours="b.tech";
    // s1.marks=100;

     Student s2=s1;//ya s2(s1) or ye deep copy ho rhi hai
    // s2.rol=46;
    // s2.name="yogesh";
    // s2.cours="b.tec";
    // s2.marks=90;

    Student s3(s1);//ya s3=s1 or ye deep copy ho rhi hai
    s3.name="yogesh prajapat";

    cout<<s1.name<<" "<<s1.rol<<" "<<s1.cours<<" "<<s1.marks<<" "<<endl;
    cout<<s2.name<<" "<<s2.rol<<" "<<s2.cours<<" "<<s2.marks<<" "<<endl;
    cout<<s3.name<<" "<<s3.rol<<" "<<s3.cours<<" "<<s3.marks<<" "<<endl;


    return 0;
}