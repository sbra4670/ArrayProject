#include "C:\Users\sea_b\Documents\cppProjects\ArrayProject\Controller.hpp"
#include <iostream>

using namespace std;

Controller :: Controller()
{

}

void printArray(int TheArray[], int sizeOfArray);

void Controller :: start()
{
    int Bob[3] = 
    {
        1,2,3
    };

    printArray (Bob, 3);
}

   
    void printArray (int TheArray[], int sizeOfArray)
    {
        for(int i = 0; i < sizeOfArray; i++)
        {
            cout << TheArray << endl;
        }   

    }




