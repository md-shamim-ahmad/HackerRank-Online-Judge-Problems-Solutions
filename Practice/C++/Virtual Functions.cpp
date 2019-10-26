#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
  public:
    std::string name;
    int age;
    Person() {}
    virtual void getdata() {}
    virtual void putdata() {}
    virtual ~Person() {}
};

class Professor : virtual public Person {
  public:
    int id;
    int publications;
    static int cur_id;

    Professor() {}

    virtual void getdata() {
        cur_id++;
        std::cin >> this->name;
        std::cin >> this->age;
        std::cin >> this->publications;
        id = cur_id;
    }
    virtual void putdata() {
        std::cout << name << " " << age << " " << publications << " " << id
                  << std::endl;
    }

    virtual ~Professor() {}
};

int Professor::cur_id = 0;

class Student : public Person {
  public:
    int id;
    int marks[6];
    int sum = 0;
    static int cur_id;

    Student() {}

    void getdata() {
        cur_id++;
        std::cin >> this->name;
        std::cin >> this->age;
        for(unsigned long j = 0; j < 6; j++) {
            std::cin >> this->marks[j];
            sum += marks[j];
            id = cur_id;
        }
    }
    virtual void putdata() {
        std::cout << name << " " << age << " " << sum << " " << id << std::endl;
    }
    virtual ~Student() {}
};

int Student::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
