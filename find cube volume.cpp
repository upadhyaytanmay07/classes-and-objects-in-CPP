/* Tanmay Upadhyay
ENTC B2
PRN 24070123120 */

#include<iostream>
using namespace std;

class Cube
{
    double height = 2.0;
    double width= 3.0;
    double length = 5.0;

    public:
    double volume()
    {
        double v;
        v=height*length*width;
        return v;
    }
    
}; // end of class

int main()
{
    Cube c;
    double vol= c.volume();
    cout<<"Volume : "<<vol<<endl;

}

/* output for this code

Volume : 30

*/
