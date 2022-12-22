#include <iostream>
#include <string.h>
using namespace std;


class Person {
    public:
        Person(){}
        Person(string name, unsigned int age);
        void set_name(string name);
        void set_age(unsigned int age);
        unsigned int get_age();
        string get_name();
    private:
        string m_name;
        unsigned int m_age;
};

Person::Person(string name, unsigned int age) {
    this->m_name = name;
    this->m_age = age;
}
void Person::set_name(string name) {
    this->m_name = name;
}
void Person::set_age(unsigned int age) {
    this->m_age = age;
}
string Person::get_name() {
    return this->m_name;
}
unsigned int Person::get_age() {
    return this->m_age;
}



class Teacher: public Person {
    public:
        Teacher(string name, unsigned int age, string lesson);
        void set_lesson(string lesson);
        string get_lesson();
    private:
        string m_lesson;
};

Teacher::Teacher(string name, unsigned int age, string lesson) {
    set_name(name);
    set_age(age);
    this->m_lesson = lesson;
}
void Teacher::set_lesson(string lesson) {
    this->m_lesson = lesson;
}
string Teacher::get_lesson() {
    return this->m_lesson;
}


int main()
{
    Teacher tea("Zhangsan", 24, "Math");
    cout << "Name:" << tea.get_name() << "\tAge:" << tea.get_age() << "\tLesson:" << tea.get_lesson() << endl;

    tea.set_name("Lisi");
    tea.set_age(30);
    tea.set_lesson("English");
    cout << "Name:" << tea.get_name() << "\tAge:" << tea.get_age() << "\tLesson:" << tea.get_lesson() << endl;
    return 0;
}
