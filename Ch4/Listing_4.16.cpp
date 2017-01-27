/* Looking at pointer example shows the diffrence of creating pointer in various settings */

#include <iostream>
using namespace std;

int main()
{
    int higgens = 5;
    int * pt = &higgens;
    int * pt1;

    pt1 = &higgens;
    cout << " Value of higgens = " << higgens << " : Adress of higgens= " << &higgens << endl;
    cout << " Value of *pt =  " << *pt <<
    ": value of pt = " << pt << endl;
    cout << "value of pt1 " << pt1 << endl;
    return 0;
}
