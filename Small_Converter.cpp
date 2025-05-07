#include <iostream>
#include <conio.h>
using namespace std;
int main (){
char ch;
cout <<"Enter a number"<<endl;
cin>>ch;
ch = tolower (ch) ;
if (ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u') {
        cout<<"The number is Vowel"<<endl;

}
else {
    cout<<"The number is Constant"<<endl;
}
getch () ;



}
