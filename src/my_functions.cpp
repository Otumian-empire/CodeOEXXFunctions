#include "my_functions.hpp"

/*
returns the sum of natural numbers within startingLimit and
 endingLimit which are divisible by 3 or 5
*/ 
int sumNatModBy3Or5(int startingLimit, int endingLimit)
{
    int s = 0;
    
    for (int i = startingLimit; i < endingLimit + 1; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            s += i;
        }
    }
    
    return s;
}


/*
returns 0, 1 or -1 if a given number is 0, 1 or -1
*/
int numberIs(int number)
{
    int r = 0;
    
    if (number > 0)
    {
        r = 1;
    }
    else if (number < 0)
    {
        r = -1;
    }
    
    return r;
}


/*
returns the sum of a given array
*/
int sumOfArray(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        s += intArray[i];
    }
    
    return s;
}


/*
returns the number of elements of the same parity, in a 
 integer given array
*/
int dummyParity(int dummyArray[20])
{
    int r = dummyArray[0] % 2;
    int s = 1;
    
    for (int i = 1; i < 20; i++)
    {
        if (dummyArray[i] % 2 == r)
        {
            s += 1;
        }
    }
    
    return s; 
}


/*
returns the index of the maximum element in a given integer array
*/
int indexOfGreatestNumber(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (intArray[i] > intArray[s])
        {
            s = i;
        }
    }
    
    return s;
}


/*
returns the maximum element in a given integer array
*/
int greatestNumber(int sizeOfArray, int intArray[])
{
    int s = 0;
    
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (intArray[i] > intArray[s])
        {
            s = i;
        }
    }
    
    return intArray[s];
}


/*
returns 1 if a given year is a leap year, else 0
*/
int isLeapYear(int intYear)
{
    int isLeap = 0;
    
    if (intYear % 4 == 0)
    {
        if (intYear % 100 == 0)
        {
            if (intYear % 400 == 0)
            {
                isLeap = 1;
            }
        }
        
        isLeap = 1;
    }
    
    return isLeap;
}

