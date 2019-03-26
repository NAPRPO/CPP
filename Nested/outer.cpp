//
// Created by Narayan Prasad Pokhrel on 2019-03-26.
//

//=============================================================================
// APPLICATION:     nestedc1
// MODULE:          OUTER CLASS
// PURPOSE:         To show two nested classes
//=============================================================================
#include <iostream>
#include <iomanip>
#include "outer.h"

using namespace std;
//--------------------------------------------------------------------------------
// defult constructor
// input:
//--------------------------------------------------------------------------------


Outer::Outer(const double a1, const double a2, const double da)
        : a1(a1), a2(a2), da(da)
{

}
//--------------------------------------------------------------------------------
//Procedure table display of given function
//--------------------------------------------------------------------------------

void Outer::display(void)
{
    Inner   fun(2.0, 0.5, this);
    double x;

    x = a1;
    while (x<=a2){
        cout << x<< '\t' << fun.value(x);
    }
    x += da;

}

//--------------------------------------------------------------------------------
//Function compute a value.

// input:   x independent variable
// output:
// value :  generated force [N]
//--------------------------------------------------------------------------------

double Outer::Inner::value(const double x) const
{
    return a+b*x;
}
