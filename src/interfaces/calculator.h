#pragma once

#include <iostream>
#include "../../cpm_modules/complex-number/src/interfaces/complex.h"

class Calculator
{
  public:
    Calculator();
    void ShowOperations();

  private:
    Complex _firstComplex;
    Complex _secondComplex;
    void PrintResult(double value);
    void PrintResult(Complex complexToBePrinted);
};