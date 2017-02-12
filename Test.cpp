#include "Test.h"

void test()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> v1( arr1, arr1+10 );

    int arr2[] = {100,200,300,400,500,600,700};
    std::vector<int> v2( arr2, arr2+10);

    int arr3[] = {1,2,3,5,8,13,21,34,55};
    std::vector<int> v3( arr3, arr3+9);

    if(orderedVectorSearch(v1, 1)
       && orderedVectorSearch(v1, 5)
       && orderedVectorSearch(v1, 7)
       && orderedVectorSearch(v1, 9)
       && !orderedVectorSearch(v1, 100)
       && !orderedVectorSearch(v1, 188)
       && !orderedVectorSearch(v1, 555)
       && !orderedVectorSearch(v1, 1750)

       && orderedVectorSearch(v2, 100)
       && orderedVectorSearch(v2, 300)
       && orderedVectorSearch(v2, 500)
       && orderedVectorSearch(v2, 700)
       && !orderedVectorSearch(v2, 1)
       && !orderedVectorSearch(v2, 8)
       && !orderedVectorSearch(v2, 37)
       && !orderedVectorSearch(v2, 430)

       && orderedVectorSearch(v3, 3)
       && orderedVectorSearch(v3, 13)
       && orderedVectorSearch(v3, 34)
       && orderedVectorSearch(v3, 55)
       && !orderedVectorSearch(v3, 6)
       && !orderedVectorSearch(v3, 20)
       && !orderedVectorSearch(v3, 100)
       && !orderedVectorSearch(v3, 200)
       )
    {
        cout<<"Test: Pass"<<endl;
    }else
    {
        cout<<"Test: Fail"<<endl;
    }
}

void testWorstCase()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,
                10,11,12,13,14,15,16,17,18,19,
                20,21,22,23,24,25,26,27,28,29,
                30,31,32,33,34,35,36,37,38,39,
                40,41,42,43,44,45,46,47,48,49,
                50,51,52,53,54,55,56,57,58,59,
                60,61,62,63,64,65,66,67,68,69,
                70,71,72,73,74,75,76,77,78,79,
                80,81,82,83,84,85,86,87,88,89,
                90,91,92,93,94,95,96,97,98,99,100};
    std::vector<int> arrayInVector( arr, arr+100 );

    cout<<" "<<endl;
    cout<<" Debugging Worst Case Array With Numbers 1-100 Ordered"<<endl;
    cout<<" "<<endl;

    cout<<" ------------------------"<<endl;

    cout<<" "<<endl;
    cout<<" Worst Case A : Inital Position"<<endl;
    if(orderedVectorSearchDebugging(arrayInVector,1)){
        cout<<" Test: Pass"<<endl;
    } else {
        cout<<" Test: Fail"<<endl;
    }

    cout<<" "<<endl;
    cout<<" ------------------------"<<endl;

    cout<<" "<<endl;
    cout<<" Worst Case B : Final Position"<<endl;
    if(orderedVectorSearchDebugging(arrayInVector,100)){
        cout<<" Test: Pass"<<endl;
    } else {
        cout<<" Test: Fail"<<endl;
    }

    cout<<" "<<endl;
    cout<<" ------------------------"<<endl;
}
