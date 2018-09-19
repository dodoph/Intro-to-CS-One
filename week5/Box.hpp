/**********************************************
**Author: Qiaojie Tang
**Date: 05-02-2018
**Description: Header file of box
***********************************************/


#ifndef BOX_HPP // Box.hpp is the Box class specification file.
#define BOX_HPP


class Box{    //Box class declaration.
  private:
    double height;
    double width;
    double length;
  
  public:
    
    Box(){   //default constructor
      setHeight(1);
      setWidth(1);
      setLength(1);

    }

    
    Box(double h, double w, double l); // constructor with three paramenters.

    
    ~Box(); //destructor

   
    void setHeight(double);  // setters
    void setWidth(double);
    void setLength(double);
    
    double calcVolume();
    double calcSurfaceArea();

};
#endif