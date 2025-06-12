#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int a;
int i;
cout<<"Enter a Number  : "<< endl;
cin>>a;
for (i=1;i<=10;i++) {
cout<<a<<"X"<<i<<"="<<(a*i)<<endl;
}
getch ();
}
