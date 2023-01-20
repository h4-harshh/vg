#include<iostream>
#include<string>
using namespace std;

struct student
{
    int roll;
    string name;
    string address;
    int age;
    string section;
};

void print(const student &s)
{
   cout << s.roll << ' '
        << s.name << ' '
        << s.age  << ' '
        << s.address;
}

int main()
{
    student x;
    x.roll=17;
    x.name="harsh";
    x.address="luhsana";
    x.age=20;
    // x.section="B";

    print(x);

    return 0;
}

// #include<iostream>
// using namespace std;

// struct Student
// {
//   int roll;
//   int age;
//   string name;
//   string address;
// };

// void print(const Student &s)
// {
//    cout << s.roll << ' '
//         << s.name << ' '
//         << s.age  << ' '
//         << s.address;
// }

// int main()
// {
//     Student s = {2323, 38, "Sandeep", "GFG"};
//     print(s);
//     return 0;
// }