#include <iostream>
#include <string>
 
using namespace std;
 
class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print_info() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
    private:
        string name;
        int age;
};
 
class Teacher : public Person {
    public:
        Teacher(string name, int age, double salary) 
            : Person(name, age) {
            this->salary = salary;
        }
        void print_info() {
            Person::print_info();
            cout << "Salary: " << salary << endl;
        }
    private:
        double salary;
};
 
int main() {
    Teacher t("Mr. Smith", 45, 55000.50);
    t.print_info(); // Prints teacher info
 
    return 0;
}

