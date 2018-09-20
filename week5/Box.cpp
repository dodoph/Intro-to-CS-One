/**********************************************
**Description: Implementation file of Box
***********************************************/


#include "Box.hpp" //Box.cpp is the Box class function implementqtion file.


Box::Box(double h, double w, double l){  //constructor 
  setHeight(h);
  setWidth(w);
  setLength(l);
}


Box::~Box(){  //destructor
}


void Box::setHeight(double h){  //This function sets the value of member variable height
    height = h;
}


void Box::setWidth(double w){ //This function sets the value of member variable width.
    width = w;
}


void Box::setLength(double l){  //This function sets the value of member variable length.
    length = l;
}


double Box::calcVolume(){   //This function calculate and return the volume of Box.
  return height * width * length;
}

double Box::calcSurfaceArea(){    //This function calculate and return the surface area of Box.
  return (width * length) * 2 + (height * width) * 2 + (height * length) * 2;
}