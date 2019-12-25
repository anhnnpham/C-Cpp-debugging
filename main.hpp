#include<iostream>
//The class accepts strings, 
//so we need to use namespace
using namespace std;

template <class T>
class Multiplier
{
private:
    T mul1, mul2, prod;

public:
    void setM1(T input1)
    {
        mul1 = input1;
    }
    void setM2(T input2);
    void setProduct();
    void printEquation();
};

/* template <class T>
void Multiplier<T>::setM1(T input1)
{
    mul1 = input1;
} */

template <class T>
void Multiplier<T>::setM2(T input2)
{
    mul2 = input2;
}

template <class T>
void Multiplier<T>::setProduct()
{
    prod = mul1 * mul2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    cout << mul1 << " * " << mul2 << " = " << prod << endl;
}
