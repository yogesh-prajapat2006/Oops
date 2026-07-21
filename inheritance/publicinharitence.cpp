#include<iostream>
using namespace std;

class Base{
    private:
      int pvt=3;

    protected:
      int protd=4;

    public:
      int pbc=33;

    int getpvt(){
        return pvt;
    }
    
};

class PublicDerived:public Base{
    public:
    int getprotd(){
        return protd;
    }
};

int main(){
    PublicDerived object1;
    cout << "Private = " << object1.getpvt() << endl;
    cout << "Protected = " << object1.getprotd() << endl;
    cout << "Public = " << object1.pbc << endl;

    return 0;
}