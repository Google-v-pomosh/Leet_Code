
// 1 Two Sum

#include <iostream>
#include "LC_header.h"
#include <list>

int main()
{
    std::cout << "Solution #1" << std::endl;
    
    Solution_1 solution_1;
    std::vector<int> nums_1 = {2, 7, 11, 15};
    int target_1 = 9;
    std::vector<int> result_1 = solution_1.twoSum(nums_1, target_1);
    if (!result_1.empty()) {std::cout << "Output is: " << result_1[0] << ", " << result_1[1] << std::endl;}
    std::cout << std::endl;

    std::cout << "Solution #121" << std::endl;
    Solution_121 solution_121;
    std::vector<int> nums_121 = {7, 6, 4, 3, 1};
    int maxProfit = solution_121.maxProfit(nums_121);
    std::cout << "Output is: " << maxProfit << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #217" << std::endl;
    Solution_217 Solution_217;
    std::vector<int> nums_217 = {1, 2, 3, 4};
    bool containsDuplicate = Solution_217.containsDuplicate(nums_217);
    if (containsDuplicate == true) {std::cout << "Output is: " << "True = " << containsDuplicate << std::endl;}
    else if (containsDuplicate == false) {std::cout << "Output is: " << "False = " << containsDuplicate << std::endl;}
    std::cout << std::endl;

    std::cout << "Solution #53" << std::endl;
    Solution_53 Solution_53;
    std::vector<int> nums_53 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSubArray_53 = Solution_53.maxSubArray(nums_53);
    std::cout << "Output is: " << maxSubArray_53 << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #152" << std::endl;
    Solution_152 Solution_152;
    std::vector<int> nums_152 = {-6, 4, -5, 8, -10, 0, 8};
    int maxProduct_152 = Solution_152.maxProduct(nums_152);
    std::cout << "Output is: " << maxProduct_152 << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #153" << std::endl;
    Solution_153 Solution_153;
    std::vector<int> nums_153 = {4, 5, 6, 7, 0, 1, 2};
    int findMin = Solution_153.findMin(nums_153);
    std::cout << "Output is: " << findMin << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #33" << std::endl;
    Solution_33 Solution_33;
    std::vector<int> nums_33 = {4, 5, 6, 7, 0, 1, 2};
    int target_33 = 0;
    int findTarget = Solution_33.search(nums_33, target_33);
    std::cout << "Output is: " << findTarget << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #238" << std::endl;
    Solution_238 Solution_238;
    std::vector<int> nums_238 = {1, 2, 3, 4};
    std::vector<int> result_238 = Solution_238.productExceptSelf(nums_238);
    std::cout << "Output is: " << std::endl;
    for (int num_238: result_238){ std::cout << num_238 << " "; }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #15" << std::endl;
    Solution_15 Solution_15;
    std::vector<int> nums_15 = {-1, 0, 1, 2, -1, -4};
    std::cout << "Input Array: ";
    for (int num_15 : nums_15)
    {
        std::cout << num_15 << " ";
    }
    std::cout << std::endl;
    std::vector<std::vector<int>> result = Solution_15.threeSum(nums_15);
    std::cout << "Triplets with sum 0: " << std::endl;
    for (const auto &triplet : result)
    {
        for (int num : triplet)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Solution #11" << std::endl;
    Solution_11 Solution_11;
    std::vector<int> nums_11 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = Solution_11.maxArea(nums_11);
    std::cout << "Output is: " << maxArea << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #206" << std::endl;
    Solution_206 Solution_206;
    ListNode_206 *head_206 = new ListNode_206(1);
    head_206->next = new ListNode_206(2);
    head_206->next->next = new ListNode_206(3);
    head_206->next->next->next = new ListNode_206(4);
    head_206->next->next->next->next = new ListNode_206(5);
    ListNode_206 *reversedHead_206 = Solution_206.reverseList(head_206);
    ListNode_206 *current_206 = head_206;
    std::cout << "Reversed List: ";
    current_206 = reversedHead_206;
    while (current_206 != nullptr)
    {
        std::cout << current_206->val << " ";
        current_206 = current_206->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #141" << std::endl;
    Solution_141 solution; 
    ListNode_141 *head_141 = new ListNode_141(3);
    head_141->next = new ListNode_141(2);
    head_141->next->next = new ListNode_141(0);
    head_141->next->next->next = new ListNode_141(4);
    // Создание цикла для тестирования (раскомментируйте строки ниже)
    head_141->next->next->next = head_141;
    // Вызов метода hasCycle
    bool hasCycle = solution.hasCycle(head_141);
    if (hasCycle)
    {
        std::cout << "The list has a cycle." << std::endl;
    }
    else
    {
        std::cout << "The list does not have a cycle." << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Solution #21" << std::endl;
    Solution_21 Solution_21;
    // Создание двух отсортированных списков для тестирования
    ListNode_21 *list1_21 = new ListNode_21(1);
    list1_21->next = new ListNode_21(3);
    list1_21->next->next = new ListNode_21(5);
    ListNode_21 *list2_21 = new ListNode_21(2);
    list2_21->next = new ListNode_21(4);
    list2_21->next->next = new ListNode_21(6);
    // Вызов метода mergeTwoLists для объединения списков
    ListNode_21 *mergedList = Solution_21.mergeTwoLists(list1_21, list2_21);
    // Вывод объединенного списка для проверки
    ListNode_21 *current_21 = mergedList;
    while (current_21 != nullptr)
    {
        std::cout << current_21->val << " ";
        current_21 = current_21->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #23" << std::endl;
    Solution_23 Solution_23;
    ListNode_23 *list1 = new ListNode_23(1);
    list1->next = new ListNode_23(4);
    list1->next->next = new ListNode_23(5);
    ListNode_23 *list2 = new ListNode_23(1);
    list2->next = new ListNode_23(3);
    list2->next->next = new ListNode_23(4);
    ListNode_23 *list3 = new ListNode_23(2);
    list3->next = new ListNode_23(6);
    std::vector<ListNode_23 *> lists_23 = {list1, list2, list3};
    ListNode_23 *mergedList_23 = Solution_23.mergeKLists(lists_23);
    while (mergedList_23)
    {
        std::cout << mergedList_23->val << " ";
        mergedList_23 = mergedList_23->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #19" << std::endl;
    Solution_19 Solution_19;
    ListNode_19 *list_19 = new ListNode_19(1);
    list_19->next = new ListNode_19(2);
    list_19->next->next = new ListNode_19(3);
    list_19->next->next->next = new ListNode_19(4);
    list_19->next->next->next->next = new ListNode_19(5);
    int n = 2;
    ListNode_19 *result_19 = Solution_19.removeNthFromEnd(list_19, n);
    while (result_19 != nullptr)
    {
        std::cout << result_19->val << " ";
        result_19 = result_19->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #143" << std::endl;
    Solution_143 Solution_143;
    ListNode_143 *head_143 = new ListNode_143(1);
    head_143->next = new ListNode_143(2);
    head_143->next->next = new ListNode_143(3);
    head_143->next->next->next = new ListNode_143(4);
    head_143->next->next->next->next = new ListNode_143(5);
    Solution_143.reorderList(head_143);
    ListNode_143 *current_143 = head_143;
    while (current_143)
    {
        std::cout << current_143->val << " ";
        current_143 = current_143->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Solution #3" << std::endl;
    Solution_3 Solution_3;
    std::string s_3 = "pwwkew";
    int result_3 = Solution_3.lengthOfLongestSubstring(s_3);
    std::cout << "Output is: " << result_3 << std::endl;
    std::cout << std::endl;

    return 0;
}