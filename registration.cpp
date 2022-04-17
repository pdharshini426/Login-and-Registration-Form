#include"registration.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void registration(){
    string registername,registerpassword,ruser,rpass;
     cout<<"Enter Your Name:";cin>>registername;
     cout<<"Enter the Password:";cin>>registerpassword;
     
     ofstream file("records.txt",ios::app);
     
     file<<registername<<' '<<registerpassword<<endl;
     cout<<"Registration is successful"<<endl;
}
