#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("yogesh.txt",ios :: in | ios :: out);
    if(!file.is_open()){
        cout<<"file is not open.Error";
    }else{
        file<<file.tellg()<<endl;
        file<<"or babys kya kar rhe ho"<<endl;
        cout<<"file is open.and the file contain the contex are : "<<endl;
        file.seekg(5);
        string st;
        
        getline(file,st);
        cout<<st<<endl;
        file.close();
    }
    
    
    return 0;
}