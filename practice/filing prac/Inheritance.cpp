//Code For Understanding Inheritance Concept
#include <iostream>
// using namespace std;         // <- Avoid using this, it's considered a bad practice

class Human                     //PARENT CLASS
{
public:                         //Setting Scope As Public So Everything Is Available Everywhere
    std::string gender;
    void walk()
    {
        std::cout << "Walking..." << std::endl;
    }

    void eat()
    {
        std::cout << "Eating..." << std::endl;
    }
};

class Person : public Human         //Inheriting From Human
                                    //All the member(variables) & methods(functions) which are part of Human
                                    //are now also part of Person Class without even Declaring or implementing them
{
    //Need Nothing Defined Here
};


// Driver Code
int main()
{

    Person person_object;   //Object of Person
    person_object.walk();   //Methods of Human are being called via Person_Object
    person_object.eat();
    return 0;
}
/*
    IMPORTANT!!
    Concluding that inheritance causes all the members in parent class to be
    included in the child class, although there access can be controlled via
    ENCAPSULATION.

    TYPES OF INHERITANCE INCLUDE:
       - MULTI-LEVEL
       - HIERARCHICAL
       - MULTIPLE
    Read More On This From Here!
    https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance
*/
