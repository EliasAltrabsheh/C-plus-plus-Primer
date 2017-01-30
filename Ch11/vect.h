#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>

namespace VECTOR
{
  class Vector
  {
  private:

    double x;  // horizenal value
    double y;  // verticle value
    double mag;  // length of Vector
    double ang;  // direction of Vector
    char mode;   // 'r' = rectangular , 'p' = polar

    //private methods for setting values

    void set_mag();
    void set_ang();
    void set_x();
    void set_y();

  public:
    Vector();
    Vector(double n1, double n2, char form = 'r');
    void set(double n1, double n2, char form = 'r');
    ~Vector();
    double xval() const {return x;} // report x value
    double yval() const {return y;}// report y value
    double magval()const {return mag;} // report mag
    double angval()const {return ang;} // report ang
    void polar_mode();
    void rect_mode();

    Vector operator+(const Vector &b) const;
    Vector operator-(const Vector &b) const;
    Vector operator-()const;
    Vector operator*(double n) const;
    //

    friend Vector operator*(double n, const Vector & a);
    friend std::ostream & operator<<(std::ostream & os, const Vector & v);
  };
}  // end namespace Vector

#endif
