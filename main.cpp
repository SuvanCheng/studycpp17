#include <iostream>
#include <vector>

typedef unsigned long unlong;
typedef unsigned int unint;
using unshort = unsigned short;

class Person{
public:
    std::string name;
    int age;
    long tel;
    Person(char const *name, int age, long tel): name(name), age(age), tel(tel){}
};

enum class Day {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main() {
    int i1, i2{}, i3{2}, i4 = 2, i5(2);
    double d1, d2{}, d3{3.5}, d4 = 2.0, d5(3.0);
    auto b = true;
    auto ch{'x'};
    auto i = 123;
    auto d{1.2};
    auto z = d + i;
    //列表初始化 {}: 不允许导致 ”信息损失〞 的初始化
    std::cout << "i1:" << i1 << "\t\t" << sizeof(i1) << std::endl;
    std::cout << "i2:" << i2 << "\t\t" << sizeof(i2) << std::endl;
    std::cout << "i3:" << i3 << "\t\t" << sizeof(i3) << std::endl;
    std::cout << "i4:" << i4 << "\t\t" << sizeof(i4) << std::endl;
    std::cout << "i5:" << i5 << "\t\t" << sizeof(i5) << std::endl;

    std::cout << "d1:" << d1 << "\t\t" << sizeof(d1) << std::endl;
    std::cout << "d2:" << d2 << "\t\t" << sizeof(d2) << std::endl;
    std::cout << "d3:" << d3 << "\t\t" << sizeof(d3) << std::endl;
    std::cout << "d4:" << d4 << "\t\t" << sizeof(d4) << std::endl;
    std::cout << "d5:" << d5 << "\t\t" << sizeof(d5) << std::endl;

    std::cout << "bool:\t" << typeid(bool).name() << std::endl;
    std::cout << "char:\t" << typeid(char).name() << std::endl;
    std::cout << "int:\t" << typeid(int).name() << std::endl;
    std::cout << "double:\t" << typeid(double).name() << std::endl;
    std::cout << "double:\t" << typeid(d5).name() << std::endl;
    std::cout << "decltyp(3+4.5):\t" << typeid(decltype(3 + 4.5)).name() << std::endl;

    std::cout << "\\hello\rwor\0ld" << std::endl;
    std::cout << R"d(\\hello\rwor\0ld)d" << std::endl;

    unint u = 11;
    while (u > 0) {
        --u;
        std::cout << u << std::endl;
    }

    //枚举
    Day day5{Day::Friday};
    std::cout << static_cast<char>(day5) << std::endl;


    //vector
    std::vector<int> iv;
    iv.push_back(1);
    iv.push_back(2);
    iv.push_back(3);
    for (int i = 0; i != iv.size(); i++) {
        std::cout << iv[i] << std::endl;
    }
    for (auto i: iv) {
        std::cout << i << std::endl;
    }

    std::vector<char> cv;
    cv.push_back('A');
    cv.push_back('B');
    cv.push_back('C');
    for (auto i: cv) {
        std::cout << i << std::endl;
    }

    std::vector<char> cv5(5);
    cv5[2] = 'A';
    for (auto i: cv5) {
        std::cout << i << std::endl;
    }

    //类class
    Person suvan = Person("程淑伟", 26, 13346640128);
    std::cout << suvan.name << " " << suvan.age << suvan.tel << std::endl;
    Person yanyan{"赵春艳",24,18322172291};
    std::cout << yanyan.name << " " << yanyan.age << yanyan.tel << std::endl;


    return 0;
}
