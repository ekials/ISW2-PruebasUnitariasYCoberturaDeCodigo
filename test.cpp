#include <gtest/gtest.h>
#include "bubbleSort.cpp"
#include <vector>

class BubbleSortTest : public ::testing::Test
{
protected:
    std::vector<int> vet;

    void SetUp() override    { vet.clear(); }   
    void TearDown() override { vet.clear(); }   
};

//1: Outer false (n < 2, no entra a los bucles) 
TEST_F(BubbleSortTest, EmptyOrSingleElement)
{
    std::vector<int> empty = {};
    std::vector<int> single = {42};
    std::vector<int> expectedEmpty = {};
    std::vector<int> expectedSingle = {42};

    bubbleSort(empty);
    bubbleSort(single);

    EXPECT_EQ(empty, expectedEmpty);
    EXPECT_EQ(single, expectedSingle);
}

//2: Outer true, Inner true, if = false (ya ordenado / no swap) 
TEST_F(BubbleSortTest, AlreadySorted_NoSwap)
{   vet = {1, 2, 3, 4};
    std::vector<int> expected = {1, 2, 3, 4};
    bubbleSort(vet);
    EXPECT_EQ(vet, expected);
}

//3: Outer true, Inner true, if = true
TEST_F(BubbleSortTest, Unsorted_WithSwap)
{
    vet = {4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4};
    bubbleSort(vet);
    EXPECT_EQ(vet, expected);
}

// 4: mezcla de swaps y noswap   
TEST_F(BubbleSortTest, MixedCase)
{
    vet = {5, 1, 4, 2, 8};
    std::vector<int> expected = {1, 2, 4, 5, 8};
    bubbleSort(vet);
    EXPECT_EQ(vet, expected);
}

// pruebita1 dos elementos desordenados
TEST_F(BubbleSortTest, TwoElementsSwap)
{
    vet = {9, 3};
    std::vector<int> expected = {3, 9};
    bubbleSort(vet);
    EXPECT_EQ(vet, expected);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
