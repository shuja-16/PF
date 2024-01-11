//Code For Understanding Abstraction Concept
#include <iostream>

class Animal                    //PARENT CLASS & ABSTRACT CLASS
{
public:                         //Setting Scope As Public So Everything Is Available Everywhere
    virtual void eat() = 0;     //<- This is Pure Virtual (it has virtual keyword + '= 0 ;' 
};                              //and has no implementation   
                                //since there is no implementation of a method in abstract class
                                //it cannot be instantiated (no object of this particular class can be made)
                                //until implementatin of all functions are provided                                


class Human : public Animal   //Inheriting From Animal
{
public:
    void eat()                  //Overidden Eat Method
    {
        std::cout << "I eat everything..." << std::endl;
    }
};


// Driver Code
int main()
{
    //Animal ani_obj;
    //ani_obj.eat();    //if you uncomment this part and try to instantiate
                        //animal class the program will result in an error
  
    //But we can make object of Human which has inherited from Animal
    //and has provided eat method with it's implementation
    Human obj;
    obj.eat();
    return 0;
}
/*
    IMPORTANT!!
    ABSTRACTION is used to provide contract of what will be provided by class
    and what will it be needing without actually implementing anything or hiding
    the complex working. It's a very useful feature.
*/
