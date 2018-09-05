#include <iostream>
#include "../../packages/complex-number/src/interfaces/complex.h"

class Calculator
{
  public:
    Calculator();
    void ShowOperations();
    void PrintResults(Complex complexToBePrinted);

  private:
    Complex _firstComplex;
    Complex _secondComplex;
    void PrintResults(double value);
};