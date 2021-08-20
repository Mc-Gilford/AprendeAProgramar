#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numberOne=4, numberTwo=5;
    float numberOneA=4, numberTwoB=5;
    int resultSum= numberOne+numberTwo;
    int resultRest= numberOne-numberTwo;
    int resultMult= numberOne*numberTwo;
    float resultDiv= numberOneA/numberTwoB; // Casteo
    int resultMod= numberOne%numberTwo;
    int resultExp= pow(numberOne, numberTwo);
    int resultSqrt= sqrt(numberOne);

    cout<<"Suma "<< resultSum<<"\n";
    cout<<"Resta "<< resultRest<<"\n";
    cout<<"Multiplicacion "<< resultMult<<"\n";
    cout<<"Division "<< resultDiv<<"\n";
    //cout<<"Modulo "<< resultMod<<"\n";
    cout<<"Exponencia "<< resultExp<<"\n";
    cout<<"Raiz "<< resultSqrt<<"\n";
}