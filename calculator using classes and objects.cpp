/* Tanmay upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;

class Calculator
{
    public: 
    int num1 = 20;
    int num2 = 5;

    int addition()
    {
        int add;
        add=num1+num2;
        cout<<"The sum of the numbers is : "<<add<<endl;
    }

    int subtraction()
    {
        int sub;
        sub=num1-num2;
        cout<<"The difference of the numbers is : "<<sub<<endl;
    }

    int multiplication();

    int division();

}; // end of class

int Calculator::multiplication()
{
    int product;
    product=num1*num2;
    cout<<"The product is : "<<product<<endl;

}

int Calculator::division()
{
    int div;
    div=num1/num2;
    cout<<"The division is : "<<div<<endl;
}

int main()
{
    Calculator calc;
    calc.addition();
    calc.subtraction();
    calc.multiplication();
    calc.division();

}

/* output for this code

The sum of the numbers is : 25
The difference of the numbers is : 15
The product is : 100
The division is : 4

*/
