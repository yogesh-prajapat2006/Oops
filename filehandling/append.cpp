#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("yogesh.txt",ios :: in | ios :: out | ios :: app);
    if(!file.is_open()){
        cout<<"file is not open.Error";
    }else{
        file<<"or yogesh ji"<<endl;
        cout<<"file is open.and the file contain the contex are : "<<endl;
        file.seekg(26);
        string st;
        while(file.good()){
            getline(file,st);
            cout<<st<<endl;
        }

        file.close();
    }
    
    
    return 0;
}