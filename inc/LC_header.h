#pragma once

#include <vector>
#include <iostream>

// 1 Two Sum

/*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
        You may assume that each input would have exactly one solution, and you may not use the same element twice.
        You can return the answer in any order.

    Учитывая массив целых чисел nums и целочисленную цель, вернуть индексы двух чисел так, чтобы они складывались в цель.
        Вы можете предположить, что каждый вход будет иметь ровно одно решение, и вы не можете использовать один и тот же элемент дважды.
        Вы можете вернуть ответ в любом порядке.
*/

class Solution_1
{
    public:
        std::vector<int> twoSum(std::vector<int> &nums, int target);
};

// 121. Best Time to Buy and Sell Stock

/*
    You are given an array prices where prices[i] is the price of a given stock on the ith day.
        You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
        Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

    Вам дан массив цен, где цены[i] — цена данной акции на i-й день.
         Вы хотите максимизировать свою прибыль, выбрав один день для покупки одной акции и выбрав другой день в будущем для продажи этой акции.
         Верните максимальную прибыль, которую вы можете получить от этой сделки. Если вы не можете получить никакой прибыли, верните 0.
*/

class Solution_121 
{
public:
    int maxProfit(std::vector<int> &prices);
};

// 217. Contains Duplicate

/*
    Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

    Учитывая целочисленный массив nums, вернуть true, если какое-либо значение встречается в массиве не менее двух раз, и вернуть false, если каждый элемент различен.
*/

class Solution_217
{
public:
    bool containsDuplicate(std::vector<int> &nums);
};

// 238. Product of Array Except Self

/*
    Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
        The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
        You must write an algorithm that runs in O(n) time and without using the division operation.

    Учитывая целочисленный массив nums, вернуть такой массив ответа, что answer[i] равен произведению всех элементов nums, кроме nums[i].
         Произведение любого префикса или суффикса чисел гарантированно соответствует 32-битному целому числу.
         Вы должны написать алгоритм, который выполняется за время O(n) и не использует операцию деления.
*/

class Solution_238
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums);
};

// 53. Maximum Subarray

/*
    Given an integer array nums, find the subarray with the largest sum, and return its sum.

    Учитывая целочисленный массив nums, найдите подмассив с наибольшей суммой и верните его сумму.
*/

class Solution_53
{
public:
    int maxSubArray(std::vector<int> &nums);
};

// 152. Maximum Product Subarray

/*
    Given an integer array nums, find a subarray that has the largest product, and return the product.
        The test cases are generated so that the answer will fit in a 32-bit integer.

    Учитывая целочисленный массив nums, найдите подмассив с наибольшим произведением и верните произведение.
        Тестовые примеры генерируются таким образом, чтобы ответ соответствовал 32-битному целому числу.
*/

class Solution_152
{
    int getMax(int a, int b);
    int getMin(int a, int b);

    public:
        int maxProduct(std::vector<int> & nums);
};

// 153. Find Minimum in Rotated Sorted Array

/*
    Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
        [4,5,6,7,0,1,2] if it was rotated 4 times.
        [0,1,2,4,5,6,7] if it was rotated 7 times.
    Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
    Given the sorted rotated array nums of unique elements, return the minimum element of this array.
    You must write an algorithm that runs in O(log n) time.

    Предположим, что массив длины n, отсортированный в порядке возрастания, вращается от 1 до n раз. Например, массив nums = [0,1,2,4,5,6,7] может стать следующим:
         [4,5,6,7,0,1,2], если он был повернут 4 раза.
         [0,1,2,4,5,6,7], если он был повернут 7 раз.
     Обратите внимание, что поворот массива [a[0], a[1], a[2], ..., a[n-1]] 1 раз приводит к массиву [a[n-1], a[0] , а[1], а[2], ..., а[n-2]].
     Учитывая число уникальных элементов отсортированного повернутого массива, вернуть минимальный элемент этого массива.
     Вы должны написать алгоритм, который работает за время O(log n).

*/

class Solution_153
{
    int getMin(int a, int b);
    public:
        int findMin(std::vector<int> &nums);
};

// 33. Search in Rotated Sorted Array

/*
    There is an integer array nums sorted in ascending order (with distinct values).
        Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., 
            nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
        Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
        You must write an algorithm with O(log n) runtime complexity.

    Существует целочисленный массив nums, отсортированный в порядке возрастания (с различными значениями).
         Перед тем, как быть переданным вашей функции, nums, возможно, вращается с неизвестным опорным индексом k (1 <= k < nums.length), так что результирующий массив равен [nums[k], nums[k+1],... , nums[n-1], nums[0], nums[1], 
            ..., nums[k-1]] (с индексом 0). Например, [0,1,2,4,5,6,7] может быть повернут с поворотным индексом 3 и станет [4,5,6,7,0,1,2].
         Учитывая массив nums после возможного поворота и целочисленную цель, вернуть индекс цели, если он находится в nums, или -1, если он не в nums.
         Вы должны написать алгоритм со сложностью выполнения O(log n).
*/

class Solution_33
{   
    public:
        int search(std::vector<int> &nums, int target);
};

// 15. 3Sum

/*
    Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
    Notice that the solution set must not contain duplicate triplets.

    Для массива целых чисел nums вернуть все триплеты [nums[i], nums[j], nums[k]] такие, что i != j, i != k и j != k, и nums[i] + числа [j] + числа [k] == 0.
        Обратите внимание, что в наборе решений не должно быть повторяющихся триплетов.
*/

class Solution_15
{
    public:
        std::vector<std::vector<int>> threeSum(std::vector<int> &nums);
};

// 11. Container With Most Water

/*
    You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
        Find two lines that together with the x-axis form a container, such that the container contains the most water.
        Return the maximum amount of water a container can store.
        Notice that you may not slant the container.

    Вам дан целочисленный массив высоты длины n. Нарисовано n вертикальных линий, две конечные точки i-й линии равны (i, 0) и (i, height[i]).
         Найдите две линии, которые вместе с осью абсцисс образуют контейнер, содержащий наибольшее количество воды.
         Возвращает максимальное количество воды, которое может храниться в контейнере.
         Обратите внимание, что вы не можете наклонять контейнер.

*/

class Solution_11
{
        int getMin(int a, int b);
    public:
        int maxArea(std::vector<int> &height);
};

// 206. Reverse Linked List

/*
    Given the head of a singly linked list, reverse the list, and return the reversed list.

    Учитывая заголовок односвязного списка, переверните список и верните перевернутый список.
*/

// Definition for singly-linked list.
struct ListNode_206 {
    int val;
      ListNode_206 *next;
      ListNode_206() : val(0), next(nullptr) {}
      ListNode_206(int x) : val(x), next(nullptr) {}
      ListNode_206(int x, ListNode_206 *next) : val(x), next(next) {}
};

class Solution_206
{
    public:
        ListNode_206 *reverseList(ListNode_206 *head);
};

// 141. Linked List Cycle

/*
    Given head, the head of a linked list, determine if the linked list has a cycle in it.
        There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
        Return true if there is a cycle in the linked list. Otherwise, return false.

    Учитывая заголовок, заголовок связанного списка, определите, есть ли в связанном списке цикл.
         В связанном списке есть цикл, если в списке есть какой-то узел, к которому можно снова добраться, непрерывно следуя за следующим указателем. Внутри pos используется для обозначения индекса узла, к которому подключен следующий указатель tail. Обратите внимание, что pos не передается в качестве параметра.
         Возвращает true, если в связанном списке есть цикл. В противном случае вернуть ложь.
*/


// Definition for singly-linked list.
 struct ListNode_141 {
    int val;
    ListNode_141 *next;
    ListNode_141(int x) : val(x), next(NULL) {}
 };
  
class Solution_141
{
    public:
        bool hasCycle(ListNode_141 *head);
};

// 21. Merge Two Sorted Lists

/*
    You are given the heads of two sorted linked lists list1 and list2.
        Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
        Return the head of the merged linked list.

    Вам даны заголовки двух отсортированных связанных списков list1 и list2.
         Объедините два списка в один отсортированный список. Список должен быть составлен путем соединения узлов первых двух списков.
         Возвращает заголовок объединенного связанного списка.
*/


 //Definition for singly-linked list.
struct ListNode_21 {
    int val;
    ListNode_21 *next;
    ListNode_21() : val(0), next(nullptr) {}
    ListNode_21(int x) : val(x), next(nullptr) {}
    ListNode_21(int x, ListNode_21 *next) : val(x), next(next) {}
};

class Solution_21
{
    public:
        ListNode_21 *mergeTwoLists(ListNode_21 *list1, ListNode_21 *list2);
};

// 23. Merge k Sorted Lists

/*
    You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
        Merge all the linked-lists into one sorted linked-list and return it.

    Вам дан массив из k списков связанных списков, каждый связанный список отсортирован в порядке возрастания.
         Объедините все связанные списки в один отсортированный связанный список и верните его.
*/


// Definition for singly-linked list.
struct ListNode_23 {
    int val;
    ListNode_23 *next;
    ListNode_23() : val(0), next(nullptr) {}
    ListNode_23(int x) : val(x), next(nullptr) {}
    ListNode_23(int x, ListNode_23 *next) : val(x), next(next) {}
 };
 
class Solution_23
{
    public:
    ListNode_23 *mergeTwoLists(ListNode_23 *list1, ListNode_23 *list2);
    ListNode_23 *mergeKLists(std::vector<ListNode_23 *> &lists);
};

// 19. Remove Nth Node From End of List

/*
    Given the head of a linked list, remove the nth node from the end of the list and return its head.

    Учитывая заголовок связанного списка, удалите n-й узел из конца списка и верните его заголовок.
*/


// Definition for singly-linked list.
struct ListNode_19 {
    int val;
    ListNode_19 *next;
    ListNode_19() : val(0), next(nullptr) {}
    ListNode_19(int x) : val(x), next(nullptr) {}
    ListNode_19(int x, ListNode_19 *next) : val(x), next(next) {}
};

class Solution_19
{
public:
    ListNode_19 *removeNthFromEnd(ListNode_19 *head, int n);
};

// 143. Reorder List

/*
    You are given the head of a singly linked-list. The list can be represented as:
        L0 → L1 → … → Ln - 1 → Ln
    Reorder the list to be on the following form:
        L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
    You may not modify the values in the list's nodes. Only nodes themselves may be changed.

    Вам дан заголовок односвязного списка. Список можно представить в виде:
        L0 → L1 → … → Ln - 1 → Ln
    Измените порядок списка, чтобы он был в следующей форме:
        L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
    Вы не можете изменять значения в узлах списка. Только сами узлы могут быть изменены.
*/


// Definition for singly-linked list.
struct ListNode_143 {
    int val;
    ListNode_143 *next;
    ListNode_143() : val(0), next(nullptr) {}
    ListNode_143(int x) : val(x), next(nullptr) {}
    ListNode_143(int x, ListNode_143 *next) : val(x), next(next) {}
 };
 
class Solution_143
{
public:
    void reorderList(ListNode_143 *head);
};

// 3. Longest Substring Without Repeating Characters

/*
    Given a string s, find the length of the longest substring without repeating characters.

    Для заданной строки s найдите длину самой длинной подстроки без повторяющихся символов.
*/

class Solution_3
{
public:
    int lengthOfLongestSubstring(std::string s);
};

// 424. Longest Repeating Character Replacement

/*
    You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
    Return the length of the longest substring containing the same letter you can get after performing the above operations.

    Вам дана строка s и целое число k. Вы можете выбрать любой символ строки и заменить его на любой другой заглавный английский символ. Вы можете выполнить эту операцию не более k раз.
    Верните длину самой длинной подстроки, содержащей ту же букву, которую вы можете получить после выполнения вышеуказанных операций.
*/

class Solution_424
{
public:
    int characterReplacement(std::string s, int k);
};