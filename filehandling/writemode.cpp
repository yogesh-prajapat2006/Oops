#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("yogesh.txt");
    if(!file.is_open()){
        cout<<"file is not open.Error";
    }else{
        cout<<"file is open.";
        file<<"my name is yogesh prajapat"<<endl;
        file<<"i an student of b.teach 1st sem...."<<endl;
        file<<"happy happy...."<<endl;
        file.close();
    }
    
    
    return 0;
}