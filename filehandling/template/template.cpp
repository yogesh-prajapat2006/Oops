#include<iostream>
using namespace std;

template<typename T>
T add(T x,T y){
    return x+y;
}

int main(){
    // int a,b;
    // cin>>a>>b;
    int x=add<int>(3,7);
    cout<<"addition is : "<< x <<endl;
    return 0;
}