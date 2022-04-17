#include"forgot.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void forgot(){
    int count;
    string fusername,fuid,fpass;
    cout<<"enter the username which you remember"<<endl;
    cin>>fusername;
     
    ifstream f1("records.txt");
     
     while(f1>>fuid>>fpass){
         if(fusername==fuid){
             count = 1;
         }
     }
     f1.close();
     if(count==1){
         cout<<"Your account is found!"<<endl;
         cout<<"YOur password id: "<<fpass<<endl;
     }
     else{
         cout<<"Your account is not found!"<<endl;
     }
}
