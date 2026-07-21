#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("yogesh.txt",ios::out | ios :: in | ios :: trunc);
    if(!file.is_open()){
        cout<<"file is not open.Error";
    }else{
        cout<<"file is open.";
        file.close();
    }
    
    
    return 0;
}