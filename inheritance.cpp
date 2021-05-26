#include <iostream>

using namespace std;

class Parent {
    int pop1;
    protected:
    int prop2;
    public :
    int prop3;
};

class Child : public Parent {
    float cprop1;
    protected:
    float cprop2;
    public :
    float cprop3;

    void doSomething() {
    }
};

void doSomethingWithParent(Parent& p) {
    cout << p.prop3 << endl;
}

int main(int argc, char const *argv[]) {
    Parent p;
    Child c;
    doSomethingWithParent(c);
    return 0;
};