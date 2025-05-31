#include <iostream>
using namespace std;

class student {
    int roll;
public:
    void insert() {
        cout<<"Enter Your ROll"<<endl;
        cin >> roll;
    }

    void out() {
        cout << "My roll is " << roll << endl;
    }
};

int main() {
    student obj;
    obj.insert();
    obj.out();
    return 0;
}
