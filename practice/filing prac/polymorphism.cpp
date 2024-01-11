//Code For Understanding Polymorphism Concept
#include <iostream>

class Animal                    //PARENT CLASS
{
public:                         //Setting Scope As Public So Everything Is Available Everywhere
    virtual void eat()          //Virtual keyword specifies that we plan to OVERRIDE this method in child classes 
    {
        std::cout << "Simple Eating..." << std::endl;
    }

    void sleep()                //Sleep method
    {
        std::cout << "I sleep at night..." << std::endl;
    }

    void sleep(int param)       //Sleep Method OVERLOADED on no. of parameter
    {                           //can also be OVERLOADED on type of parameter
                                //or combination of type and no. both
        std::cout << "I sleep at day & night both..." << std::endl;
    }
};

class Herbivorous : public Animal   //Inheriting From Animal
{
public:
    void eat()                  //Overidden Eat Method
    {
        std::cout << "I only eat green veggies" << std::endl;
    }
};

class Carnivorous : public Animal   //Inheriting From Animal
{
public:
    void eat()                  //Overidden Eat Method
    {
        std::cout << "I only eat red flesh" << std::endl;
    }
};

// Driver Code
int main()
{
    //OVERLOADING:
    Animal ani_obj;
    ani_obj.sleep();    //same name of function
    ani_obj.sleep(1);   //different behavior within same class

    //OVERRIDING
    Herbivorous herb_obj;
    Carnivorous carn_obj;    
    herb_obj.eat();
    carn_obj.eat();
    //only the functions defined in child classes will be called

    return 0;
}
/*
    IMPORTANT!!
    The word polymorphism means having many forms.
    It is the ability to take more than one form.
    It is a feature that provides a function more than one definition.
    It can be implemented using function overloading (Within Same Class),
    function overriding (In Parent & Child Class).
*/
