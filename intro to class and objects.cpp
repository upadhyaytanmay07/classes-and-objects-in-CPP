/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */


#include<iostream>
using namespace std;

class Student
{
    public:
string name;
string branch;
string subject;
string year;
float result;

}; // end of class

int main()
{
Student st;
st.name="Tanmay\n";
st.branch="E&TC\n";
st.subject="C++\n";

st.result=8.6;
cout<<endl<<st.name<<endl<<st.branch<<endl<<st.subject<<endl<<st.result<<endl;

}

/* output for this code
Tanmay

E&TC

C++

8.6
*/  
