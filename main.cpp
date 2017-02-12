#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Test.h"
using namespace std;

bool orderedVectorSearch(vector<int> orderedVector, int numberToSearch, int initialPos, int finalPos, int numberOfIteration, bool showIterations)
{
    if(initialPos > finalPos)
        return false;

    int posMitad = (initialPos+finalPos)/2;
    int currentNumber = orderedVector[posMitad];

    if(showIterations)
        cout<<" Iteracion #" << numberOfIteration << " -> Posicion Mitad : " << posMitad << ", Valor Posicion Mitad : " << currentNumber <<endl;

    if(currentNumber == numberToSearch)
        return true;

    if(currentNumber > numberToSearch)
    {
        return orderedVectorSearch(orderedVector,numberToSearch,0,posMitad-1,numberOfIteration+1,showIterations);
    } else {
        return orderedVectorSearch(orderedVector,numberToSearch,posMitad+1,finalPos,numberOfIteration+1,showIterations);
    }
    return false;
}

bool orderedVectorSearchDebugging(vector<int> orderedVector, int numberToSearch)
{
    return orderedVectorSearch(orderedVector,numberToSearch,0,orderedVector.size()-1,1,true);
}

bool orderedVectorSearch(vector<int> orderedVector, int numberToSearch)
{
    return orderedVectorSearch(orderedVector,numberToSearch,0,orderedVector.size()-1,1,false);
}

int main ()
{
    testWorstCase();
    return 0;
}
