/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
#include<fstream>
#include"login.h"
#include"registration.h"
#include"forgot.h"
using namespace std;
int main()
{
    int option;
    do{
    cout<<"____________________________________\n";
    cout<<"\t\tMENU"<<endl;
    cout<<"\tEnter 1 for LOGIN"<<endl;
    cout<<"\tEnter 2 for REGISTRATION"<<endl;
    cout<<"\tEnter 3 for FORGOT PASSWORD"<<endl;
    cout<<"\tEnter 4 for EXIT"<<endl;
    cout<<"____________________________________\n";
    cin>>option;
    
    switch(option){
        case 1:
           login();
           break;
        case 2:
           registration();
           break;
         case 3:
          forgot();
           break;
         case 4:
           cout<<"Thank you!"<<endl;
           break;
         default:
           cout<<"Enter proper option"<<endl;
           
    }
    }while(option!=0);
    return 0;
}
