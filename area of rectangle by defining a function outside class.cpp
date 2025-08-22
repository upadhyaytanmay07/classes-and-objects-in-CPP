/* Tanmay upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;

class Rectangle 
{
public:
    float length;
    float width;
    float area;

    Rectangle() 
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    void display();
};

void Rectangle::display() 
{
    area = length * width;
    cout << "\nThe area of the rectangle is: " << area << endl;
}

int main() 
{
    Rectangle rect;  
    rect.display();  
    
}

/* output for this code
Enter the length of the rectangle: 25
Enter the width of the rectangle: 35

The area of the rectangle is: 875
*/
