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