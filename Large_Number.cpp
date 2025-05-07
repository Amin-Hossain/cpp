#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int num,num1,num2;
cout <<"Enter three number\n"<<endl;
cin>>num>>num1>>num2;
if (num>num1&&num>num2) {
        cout<<"The largets number is :"<<num;

}
else if (num1>num&&num1>num2){

    cout <<"The largets number is :"<<num1;


}
else {
    cout <<"The largest number is :"<<num2;

}
getch () ;



}
