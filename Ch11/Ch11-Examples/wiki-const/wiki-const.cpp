#include <iostream>
 
class Person
{
    public:
        int age;
        Person(int age) : age(age) {}
};
 
int main()
{
    Person timmy(10);
    Person sally(15);
 
    Person timmy_clone = timmy;
 
    std::cout << timmy.age << " " << sally.age << " " << timmy_clone.age << std::endl;
 
    timmy.age = 23;
 
    std::cout << timmy.age << " " << sally.age << " " << timmy_clone.age << std::endl;
}