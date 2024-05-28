/*Static Data Member:
It is generally used to store value common to the whole class. The static data member differs from an
ordinary data member in the following ways:
(i) Only a single copy of the static data member is used by all the objects.
(ii) It can be used within the class but its lifetime is the whole program.
For making a data member static, we require:
(a) Declare it within the class.
(b) Define it outside the class
*/
#include <iostream>
using namespace std;
class alpha
{
    private:
        int id;
        static int count;
    public:
        alpha()
        {
            count++;
            id=count;
        }
        void print()
        {
            cout<<"My id is: "<<id<<endl;
            cout<<"count is: "<<count<<endl;
        }
};
int alpha ::count=0; //definition of count
int main ()
{
    alpha a1;
    a1.print();
    alpha a2, a3;
    a2.print();
   // alpha a3;

    a3.print();
    return 0;
    }

    ///output:
    ///My id is: 1
    ///count is: 1
    ///My id is: 2
    ///count is: 3
    ///My id is: 3
    ///count is: 3
