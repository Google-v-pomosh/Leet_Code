
// 1 Two Sum

#include <iostream>
#include "LC_header.h"

int main()
{
    std::cout << "Solution #1" << std::endl;
    
    Solution_1 solution_1;
    std::vector<int> nums_1 = {2, 7, 11, 15};
    int target_1 = 9;
    std::vector<int> result_1 = solution_1.twoSum(nums_1, target_1);
    if (!result_1.empty()) {
        std::cout << "Indices of the two numbers whose sum is equal to the target: " << result_1[0] << ", " << result_1[1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Solution #2" << std::endl;

    return 0;
}