#include <gtest/gtest.h>
#include "chapter1/BinarySearch.h"



/**chapter 1**/
/***binary search***/
TEST(Chapter1, BinarySearch) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(binarySearchWhile(100, array, 0, 9), binarySearch(50, array, 0, 9)); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}