#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main (){
    char name [20];
    char father [20];
    char mother [20];
    char addrs [20];
    char rl [10];
    int number ;

    cout<<"Enter your name : ";
    cin>>name ;
    cout<<endl;
    cout <<"Enter your Father's name : ";
    cin>>father;
    cout<<endl;
    cout<<"Enter your Mother's name : ";
    cin>>mother;
    cout<<endl;
    cout << "Enter your Address : ";
    cin>>addrs;
    cout<<endl;
    cout << "Enter your Religion : ";
    cin>>rl;
    cout<<endl;
    cout<<"Enter your Number : ";
    cin>>number;
    cout<<endl;
    cout<<"\n \n";
    cout <<"HI"<<endl;
    cout<<setw(50)<<"My NAME : ";
    cout<< name;
    cout<<endl;
    cout <<setw(50)<<"Father's name : ";
    cout<< father;
    cout <<endl;
    cout <<setw(50)<<"Mother's name : ";
    cout<<mother;
    cout<<endl;
    cout <<setw(50)<<"Permanent Address : ";
    cout<<addrs;
    cout<<endl;
    cout<<setw(50)<<"Regilion : ";
    cout<<rl;
    cout<<endl;
    cout<<setw(50)<<"Mobile Number : ";
    cout<<number;
    cout<<endl;












}
