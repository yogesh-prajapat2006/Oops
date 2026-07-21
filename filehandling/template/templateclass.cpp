#include<iostream>
using namespace std;

template<typename T>
class Adder
{
private:
    T num1,num2;
public:
    void setvelues( T a,T b);
    T getsum(T a,T b);
};

template<typename T>
void Adder<T>::setvelues(T a,T b){
    num1=a;
    num2=b;
}

T Adder<T>::getsum(){
    return num1+num2;
}

int main(){
    Adder<int> intadder;
    intadder.setvelues(5,15);
    cout<<"the sum is the : "<<intadder.getsum()<<endl;
    return 0;
}