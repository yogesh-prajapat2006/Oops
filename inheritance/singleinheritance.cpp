#include<iostream>
using namespace std;
class AStudent{
    public:
    string name;
    char batchno;
};
class BStudent : public AStudent{
    public:
    int rollno; 
};

int main(){
    BStudent bs1;
    bs1.name="yogesh ji";
    bs1.batchno='b';
    bs1.rollno=45;

    cout<<"name :"<<bs1.name<<endl;
    cout<<"batchno :"<<bs1.batchno<<endl;
    cout<<" :"<<bs1.rollno<<endl;

}