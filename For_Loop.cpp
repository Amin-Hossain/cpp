#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number in 1 to 10: " <<endl;
    //user input
    cin>>a;
    for (a ; a <= 20; a++) {
        cout << a << " ";
    }
    getch ();
}
