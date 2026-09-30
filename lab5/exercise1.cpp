// A C++ program that dynamically allocates, prints, and safely deletes an integer and a float pointer.


#include <iostream>
using namespace std;

int main()
{
    int* intptr = new int(89);

    float* floatptr = new float(100.75);

    cout << "Integer pointer value : " << *intptr << endl;
    cout << "Float pointer value : " << *floatptr << endl;

    delete intptr;
    delete floatptr;

    return 0;
}