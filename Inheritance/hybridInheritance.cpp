// Base class 1
#include<bits/stdc++.h>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

// Base class 2
class Pet {
public:
    void beFriendly() {
        cout << "Pet is friendly" << endl;
    }
};

// Intermediate class
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

// Derived class
class Dog : public Mammal, public Pet {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();        // Inherited from Animal class
    myDog.walk();       // Inherited from Mammal class
    myDog.beFriendly(); // Inherited from Pet class
    myDog.bark();       // Method from Dog class
    return 0;
}
