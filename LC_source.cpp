// 1 Two Sum

#include "LC_header.h"
#include <iostream>

std::vector<int> Solution_1::twoSum(std::vector<int> &nums, int target)
{
    int n = nums.size();                        // Создаем переменную для итерации по вектору
    for (int i = 0; i < n - 1; i++)             // Итерируемся по вектору от [0]
    {
        for (int j = i + 1; j < n; j++)         // Итерируемся по вектору от [1]
        {
            if (nums[i] + nums[j] == target)    // Проверяем условие, что [i] + [j] = искокомому числу
            {
                return {i, j};                  // Возвращяем индексы
            }
        }
    }
    std::cout << "Not found" << std::endl;
    return {};
}

// 13. Roman to Integer

/*
           Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

    Symbol       Value
     I             1
     V             5
     X             10
     L             50
     C             100
     D             500
     M             1000

     For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII,
     which is XX + V + II.

     Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV.
     Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where
     subtraction is used:

     I can be placed before V (5) and X (10) to make 4 and 9.
     X can be placed before L (50) and C (100) to make 40 and 90.
     C can be placed before D (500) and M (1000) to make 400 and 900.
     Given a roman numeral, convert it to an integer.
*/

#include <iostream>
#include <string>
#include <unordered_map>
class Solution13 {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int result = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            int value = romanMap[s[i]];
            if (i < n - 1 && value < romanMap[s[i+1]]) {
                result -= value;
            }
            else {
                result += value;
            }
        }
        return result;
    }
};

// 20. Valid Parentheses

/*
    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
    An input string is valid if:
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

    Учитывая строку s, содержащую только символы '(', ')', '{', '}', '[' и ']', определите, допустима ли входная строка.
    Входная строка действительна, если:
    Открытые скобки должны быть закрыты однотипными скобками.
    Открытые скобки должны быть закрыты в правильном порядке.
    Каждой закрывающей скобке соответствует открытая скобка того же типа.
*/

#include <iostream>
#include <string>
#include <stack>
class Solution20 {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                if (st.empty()) {
                    return false;
                }
                char t = st.top();
                st.pop();
                if ((c == ')' && t != '(') ||
                    (c == '}' && t != '{') ||
                    (c == ']' && t != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

// 21. Merge Two Sorted Lists

/*
    You are given the heads of two sorted linked lists list1 and list2.
    Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
    Return the head of the merged linked list.

    Вам даны заголовки двух отсортированных связанных списков list1 и list2.
    Объедините два списка в один отсортированный список. Список должен быть составлен путем соединения узлов первых двух списков.
    Возвращает заголовок объединенного связанного списка.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <list>
#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution21 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    }
};
