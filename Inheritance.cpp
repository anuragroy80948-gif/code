#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

// Child class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;

    d.speak(); // inherited function
    d.bark();  // child class function

    return 0;
}