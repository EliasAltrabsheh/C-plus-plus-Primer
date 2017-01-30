
#include <cmath>
#include "vect.h" // includes iostream

using std::sin;
using std::cos;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR
{
  const double Rad_to_deg = 57.3957795130823;

  //private methods
  //calculations magnitude from x to y

  void Vector::set_mag()
  {
    mag = sqrt(x * x + y * y);
  }

  void Vector::set_ang()
  {
    if(x ==0.0 && y == 0.0)
      ang = 0.0;
    else
      ang =atan2(y,x);
  }

  void Vector::set_x()
  {
    x = mag * cos(ang);
  }

  void Vector::set_y()
  {
    y = mag * sin(ang);
  }

  Vector::Vector()
  {
    x = y = mag = ang = 0.0;
    mode = 'r';
  }

  // construct vector from cordinate if form is r
  // else from polar_mode if it p

  Vector::Vector(double n1, double n2, char form)
  {
    mode = form;
    if (form == 'r')
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
      }
    else if (form == 'p')
    {
      mag = n1;
      ang = n2;
      set_x();
      set_y();
    }
  else
   {
      cout << "Incorrect 3rd argument to Vector() ...";
      cout << "vector set to 0" <<endl;
      x = y = mag = ang  = 0.0;
      mode = 'r';
   }
  }

  void Vector::set(double n1, double n2, char form)
  {
    mode = form;
    if (form == 'r')
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
      }
    else if (form == 'p')
    {
      mag = n1;
      ang = n2/Rad_to_deg;
      set_x();
      set_y();
    }
  else
   {
      cout << "Incorrect 3rd argument to Vector() ...";
      cout << "vector set to 0" <<endl;
      x = y = mag = ang  = 0.0;
      mode = 'r';
   }
  }

  Vector::~Vector() // destructer
  {
  }

  void Vector::polar_mode()
  {
    mode = 'p';
  }

  void Vector::rect_mode()
  {
    mode = 'r';
  }

  // operater overloading

  Vector Vector ::operator+(const Vector &b)const
  {
    return Vector(x+b.x, y+b.y);
  }

  Vector Vector::operator-(const Vector &b)const
  {
   return Vector(x-b.x, y-b.y);
  }

  // reverse sign of Vector

  Vector Vector::operator-()const
  {
    return Vector(-x,-y);
  }

 Vector Vector::operator*(double n) const
  {
    return Vector(n * x, n * y);

  }

  Vector operator*(double n, const Vector &a)
  {
    return a * n;
  }

  std::ostream & operator<<(std::ostream & os, const Vector & v)
  {
    if(v.mode =='r')
        os << "(x,y) == ("<< v.y <<", "<< v.y <<")";
    else if(v.mode == 'p')
    {
      os << "(m,a) =("<< v.mag << " , " << v.ang * Rad_to_deg << ")";
    }
    else
      os << "Vector object mode is invalid";
    return os;
  }
} // end namespace vector
