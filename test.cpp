#include <gtest/gtest.h>
#include "src/my_functions.hpp"


TEST(MyFunctionTest, sumNatModBy3Or5Test)
{
    int startingLimit = 3, endingLimit = 100;
    
    int testResult = sumNatModBy3Or5(startingLimit, endingLimit);
    int testResultExpected = 2418;
    
    ASSERT_EQ(testResultExpected, testResult);
}

TEST(MyFunctionTest, numberIsTest)
{
    int testArrayForNumberIs[] = {-5, 0, 6};
    int testArrayExpectedForNumberIs[] = {-1, 0, 1};
    
    for (int i = 0; i < 3; i++)
    {
        ASSERT_EQ(testArrayExpectedForNumberIs[i], numberIs(testArrayForNumberIs[i]));
    }
}

TEST(MyFunctionTest, sumOfArrayTest)
{
    int testArrayForSumOfArray[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };

    int testValueOfSumOfArray = sumOfArray(10,
        testArrayForSumOfArray);
    int testValueExpectedForsumOfArray = 35;
    
    ASSERT_EQ(testValueExpectedForsumOfArray, testValueOfSumOfArray);
}

TEST(MyFunctionTest, dummyParityTest)
{
    int testArrayForDummyParity[20] = {
        21, 1, 9, 14, 4,
        65, 43, 99, 41, 0,
        56, 61, 23, 10, 11,
        27, 4, 1002, 30, 245
    };
    
    int testValueForDummyParity = dummyParity(testArrayForDummyParity);
    int testValueExpectedForDummyParity = 12;
    
    ASSERT_EQ(testValueExpectedForDummyParity, testValueForDummyParity);
}

TEST(MyFunctionTest, indexOfGreatestNumberTest)
{
    int testArrayForIndexOfGreatestNumber[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };
    
    int testValueOfIndexOfGreatestNumber = indexOfGreatestNumber(10,
         testArrayForIndexOfGreatestNumber);
    
    int testValueExpectedForindexOfGreatestNumber = 7;
    
    ASSERT_EQ(testValueExpectedForindexOfGreatestNumber,
     testValueOfIndexOfGreatestNumber);
}

TEST(MyFunctionTest, greatestNumberTest)
{
    int testArrayForGreatestNumber[] = {
        -21, 1, 9, 14, -4,
        -65, 43, 99, -41, 0
    };
    
    int testValueOfGreatestNumber = greatestNumber(10,
        testArrayForGreatestNumber);
    
    int testValueExpectedForGreatestNumber = 99;
    
    ASSERT_EQ(testValueExpectedForGreatestNumber, 
        testValueOfGreatestNumber);
}

TEST(MyFunctionTest, isLeapYearTest)
{
    int testValueForIsLeapYear = isLeapYear(3004);
    int testValueExpectedForIsLeapYear = 1;
    
    ASSERT_EQ(testValueExpectedForIsLeapYear,
        testValueForIsLeapYear);
}


int main (int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

