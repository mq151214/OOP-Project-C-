#ifndef ATTRIBUTEDNODE1_H
#define ATTRIBUTEDNODE1_H

class AttributedNode1
{
    char Gender;
    int Age;

    public:
    AttributedNode1();
    AttributedNode1(char gender,int age);
    ~AttributedNode1();
    void setGender(char gender);
    void setAge(int age);
    char getGender();
    int getAge();
};
#endif 