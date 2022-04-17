#include"login.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void login(){
    string username,password,un,pass;
    int flag;
    cout<<"Please enter the username and password"<<endl;
    cout<<"Username:";cin>>username;
    cout<<"Password:";cin>>password;
    cout<<"\n";
    
    ifstream input("records.txt");
    
    while(input>>un>>pass){
        if(un==username && pass==password){
            flag = 1;
        }
    }
    input.close();
    if(flag==1)
      cout<<username<<",Your login has been successful!"<<endl;
    else{
      cout<<"LOGIN ERROR"<<endl;
    }
}
