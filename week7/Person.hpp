/**********************************************
 **Description: Header file of Person
 ***********************************************/

#ifndef PERSON_HPP  // PERSON.hpp is the Person class specification file.
#define PERSON_HPP

#include<string>

class Person
{
  private:  //This is member of variable
    std::string name;
    double age;
  public:  
    Person(std::string, double); //constructor with two paramentors

    std::string getName(); //get function
    double getAge();
};
#endif