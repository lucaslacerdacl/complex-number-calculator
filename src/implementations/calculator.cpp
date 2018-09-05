#include "../interfaces/calculator.h"

Calculator::Calculator()
{
    double firstRealNumber = 0;
    std::cout << "Olá, digite a parte real do primeiro número complexo que deseja operar" << std::endl;
    std::cin >> firstRealNumber;
    std::cout << std::endl;

    double firstImaginaryNumber = 0;
    std::cout << "Olá, digite a parte imaginária do primeiro número complexo que deseja operar" << std::endl;
    std::cin >> firstImaginaryNumber;
    std::cout << std::endl;

    _firstComplex = Complex(firstRealNumber, firstImaginaryNumber);

    int inputAnotherComplex = 0;
    std::cout << "Deseja inserir mais um número complexo?" << std::endl;
    std::cout << "1 - Sim" << std::endl;
    std::cout << "2 - Não" << std::endl;
    std::cin >> inputAnotherComplex;
    std::cout << std::endl;

    if (inputAnotherComplex == 1)
    {
        double secondRealNumber = 0;
        std::cout << "Olá, digite a parte real do segundo número complexo que deseja operar" << std::endl;
        std::cin >> secondRealNumber;
        std::cout << std::endl;

        double secondImaginaryNumber = 0;
        std::cout << "Olá, digite a parte imaginária do segundo número complexo que deseja operar" << std::endl;
        std::cin >> secondImaginaryNumber;
        std::cout << std::endl;

        _secondComplex = Complex(secondRealNumber, secondImaginaryNumber);
    }
    else if (inputAnotherComplex == 2)
    {
        _secondComplex = Complex(0, 0);
    }
    else 
    {
        std::cout << "Por favor, insira uma opção válida" << std::endl;
        std::cout << std::endl;
    }
};

void Calculator::ShowOperations()
{
    int inputOperation = 0;
    std::cout << "Agora digite a operação que deseja realizar com os complexos informados" << std::endl;
    std::cout << "1 - Soma" << std::endl;
    std::cout << "2 - Subtração" << std::endl;
    std::cout << "3 - Multiplicação" << std::endl;
    std::cout << "4 - Divisão" << std::endl;
    std::cout << "5 - Modulo" << std::endl;
    std::cout << "6 - Oposto" << std::endl;
    std::cout << "7 - Inverso" << std::endl;
    std::cout << "8 - Conjugado" << std::endl;
    std::cin >> inputOperation;
    std::cout << std::endl;

    if (inputOperation == 1)
    {
        Complex result = _firstComplex + _secondComplex;
        PrintResults(result);
    } 
    else if (inputOperation == 2)
    {
        Complex result = _firstComplex - _secondComplex;
        PrintResults(result);
    } 
    else if (inputOperation == 3)
    {
        Complex result = _firstComplex * _secondComplex;
        PrintResults(result);
    } 
    else if (inputOperation == 4)
    {
        Complex result = _firstComplex / _secondComplex;
        PrintResults(result);
    } 
    else if (inputOperation == 5)
    {
        PrintResults(_firstComplex.Module());        
    } 
    else if (inputOperation == 6)
    {
        PrintResults(- _firstComplex);        
    } 
    else if (inputOperation == 7)
    {
        PrintResults(_firstComplex.Invert());
    } 
    else if (inputOperation == 8)
    {
        PrintResults(_firstComplex.Conjugated());
    } 
    else 
    {
        std::cout << "Por favor, insira uma opção válida" << std::endl;
        std::cout << std::endl;
    }
};

void Calculator::PrintResults(Complex complexToBePrinted)
{
    std::cout << complexToBePrinted.GetRealNumber() << " + " << complexToBePrinted.GetImaginaryNumber() << "i" << std::endl;
    std::cout << std::endl;
};

void Calculator::PrintResults(double value)
{
    std::cout << value << std::endl;
    std::cout << std::endl;
};