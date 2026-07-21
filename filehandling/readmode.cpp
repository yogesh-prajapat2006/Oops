#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("yogesh.txt");
    if(!file.is_open()){
        cout<<"file is not open.Error";
    }else{
        cout<<"file is open.and the file contain the contex are : "<<endl;
        string st;
        while(file.good()){
            getline(file,st);
            cout<<st<<endl;
        }

        file.close();
    }
    
    
    return 0;
}