/**********************************************
**Description: Implementation file of Person
***********************************************/

#include "Person.hpp"

Person::Person(std::string nameIn, double ageIn){  //constructor
  name = nameIn;
  age = ageIn;
}

std::string Person::getName(){ //This function return name of string type
  return name;
}

double Person::getAge(){ //This funtion return age of double type
  return age;
}
