//Code For Understanding Encapsulation Concept
#include <iostream>

class Animal                    //PARENT CLASS
{
public:                         //Setting Scope As Public So Everything here Is Available Everywhere
    void eat()
    {
        std::cout << "I am Eating..." << std::endl;
    }

protected:                      //Setting Scope As Protected So Everything here Is Available In This And Child Class(es)
    void sleep()
    {
        std::cout << "I am Sleeping..." << std::endl;
    }

private:                        //Setting Scope As Private So Everything here Is Available In This Class Only
    void walk()
    {
        std::cout << "I am Walking..." << std::endl;
    }
};                                                          


class Human : public Animal   //Inheriting From Animal
{
public:
    void available_methods()
    {
        std::cout << "\nFrom Human Class :" << std::endl;
        Animal::eat();      //<- available everywhere as it is public
        Animal::sleep();    //<- available in child classes as it is protected
        //Animal::walk();   //<- this method is not available as it is private,
                            //   uncommenting will result in an error
    }
};


// Driver Code
int main()
{
    Animal ani_object;
    std::cout << "From Main Function :" << std::endl;
    ani_object.eat();
    //ani_object.sleep(); //<- not available now, uncommenting will result in an error
    //ani_object.walk();  //<- not available now, uncommenting will result in an error
    
    Human hum_object;
    hum_object.available_methods();
}

/*
    IMPORTANT!!
    ENCAPSULATION is used to hide data and control access.
    It's a very useful feature in terms of data security and access control.
*/
