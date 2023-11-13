#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string name;

    Dog(string name, int age) : name(name), age(age) {}

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

private:
    int age;
};

int main() {
    Dog myDog("Buddy", 3);

    cout << "Dog's name: " << myDog.name << endl;

    cout << "Dog's age: " << myDog.getAge() << " years" << endl;

    myDog.setAge(myDog.getAge() + 1);

    cout << "Updated age: " << myDog.getAge() << " years" << endl;

    return 0;
}
