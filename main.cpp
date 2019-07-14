#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

class Animal {
public:
    Animal(const string& s) : Name(s) {

    }
    const string Name;
};


class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {

    }

    void Bark() {
        cout << Name << " barks: woof!" << endl;
    }
};

int main() {

	Dog d("Bobik");
	d.Bark();
	return 0;
}
