// 1 Two Sum

#include "LC_header.h"
#include <iostream>
#include <set>

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

// 121. Best Time to Buy and Sell Stock
/*
    #include "LC_header.h"
    #include <iostream>
    #include <vector>
*/

int Solution_121::maxProfit(std::vector<int> &prices)
{
    int n = prices.size(); // Получаем количество элементов в векторе (количество дней)
    int maxProfit = 0;     // Инициализируем переменную для хранения максимальной прибыли

    // Внешний цикл пробегается по всем дням, кроме последнего
    for (int i = 0; i < n - 1; i++)
    {
        // Внутренний цикл пробегается по дням, следующим за i-м днем
        for (int j = i + 1; j < n; j++)
        {
            // Проверяем разницу в ценах между текущим днем (j) и i-м днем
            if (prices[j] - prices[i] > maxProfit)
            {
                // Если разница больше текущей максимальной прибыли, обновляем ее значение
                maxProfit = prices[j] - prices[i];
            }
        }
    }

    return maxProfit; // Возвращаем максимальную прибыль
}

/*
#include <vector>
#include <algorithm>

int maxProfitOnePass(std::vector<int>& prices) {
    int n = prices.size();
    if (n == 0) {
        return 0; // Если нет цен на акции, то прибыль равна 0
    }

    int minPrice = prices[0]; // Переменная для хранения минимальной цены покупки
    int maxProfit = 0; // Переменная для хранения максимальной прибыли

    // Проходимся по всем ценам на акции
    for (int i = 1; i < n; i++) {
        // Находим минимальную цену покупки
        minPrice = std::min(minPrice, prices[i]);

        // Вычисляем прибыль, которую можно получить, продав акции на текущем дне
        int profit = prices[i] - minPrice;

        // Обновляем максимальную прибыль, если полученная прибыль больше текущей
        maxProfit = std::max(maxProfit, profit);
    }

    return maxProfit;
}
*/

// 238. Product of Array Except Self

/*
    #include <vector>
*/

std::vector<int> Solution_238::productExceptSelf(std::vector<int> &nums)
{
    int n = nums.size();

    std::vector<int> result(n, 1); // Вектор с итоговыми произведениями, инициализированы единицами

    int left = 1; // Переменная для хранения произведения элементов слева
    for (int i = 1; i < n; i++)
    {
        left = left * nums[i - 1];    // Вычисляем произведение элементов слева от текущего
        result[i] = result[i] * left; // Умножаем текущий элемент результата на произведение слева
    }

    int right = 1; // Переменная для хранения произведения элементов справа
    for (int i = n - 2; i >= 0; i--)
    {
        right = right * nums[i + 1];   // Вычисляем произведение элементов справа от текущего
        result[i] = result[i] * right; // Умножаем текущий элемент результата на произведение справа
    }

    return result; // Возвращаем итоговый вектор с произведениями
}

// 217. Contains Duplicate
/*
    #include "LC_header.h"
    #include <vector>
    #include <iostream>
*/

bool Solution_217::containsDuplicate(std::vector<int> &nums)
{
    int n = nums.size();        // Получаем размер вектора (количество элементов)
    for (int i = 0; i < n; i++) // Проходим по всем элементам вектора
    {
        for (int j = i + 1; j < n; j++) // Проходим по элементам, следующим за i-м элементом
        {
            if (nums[i] == nums[j]) // Если найдено повторяющееся значение
            {
                return true; // Возвращаем true, так как есть повторяющийся элемент
            }
        }
    }
    return false; // Если нет повторяющихся элементов, возвращаем false
}

/*
#include <vector>
#include <algorithm>

bool containsDuplicate(std::vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
        return false; // Если вектор пустой или содержит только один элемент, нет повторений
    }

    // Сортируем массив
    std::sort(nums.begin(), nums.end());

    // Проверяем наличие повторяющихся элементов после сортировки
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true; // Если нашли повторяющиеся элементы, возвращаем true
        }
    }

    return false; // Если не нашли повторений, возвращаем false
}

*/

// 53. Maximum Subarray
/*
#include <iostream>
#include <vector>
*/
#include <algorithm>
#include <limits.h>

int Solution_53::maxSubArray(std::vector<int> &nums)
{
    int maxSum = INT_MIN; // Переменная для хранения текущего максимума, инициализируется первым элементом массива
    int currentSum = 0;   // Переменная для хранения текущей суммы подмассива, инициализируется нулем

    for (int i = 0; i < nums.size(); i++) // Цикл проходит по всем элементам массива
    {
        currentSum += nums[i]; // Добавляем текущий элемент к текущей сумме подмассива

        if (currentSum > maxSum) // Если текущая сумма подмассива больше текущего максимума
        {
            maxSum = currentSum; // Обновляем текущий максимум
        }

        if (currentSum < 0) // Если текущая сумма подмассива отрицательна
        {
            currentSum = 0; // Обнуляем текущую сумму подмассива, начинаем считать сумму для нового потенциального подмассива
        }
    }

    return maxSum; // Возвращаем максимальную сумму подмассива
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

int Solution_53::maxSubArray(std::vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0; // Обработка случая с пустым вектором
    }

    int maxSum = nums[0];     // Инициализируем максимальную сумму первым элементом
    int currentSum = nums[0]; // Инициализируем текущую сумму первым элементом

    for (int i = 1; i < n; i++)
    {
        // Поиск максимальной суммы подмассива на текущем шаге
        currentSum = std::max(nums[i], currentSum + nums[i]);

        // Обновляем максимальную сумму, если текущая сумма больше
        maxSum = std::max(maxSum, currentSum);
    }
    return maxSum;
}
*/

// 152. Maximum Product Subarray

/*
 #include <vector>
*/

// Функция для получения максимального значения из двух чисел
int Solution_152::getMax(int a, int b) 
{
    if (a > b)
    {
        return a;
    } 
    else
    {
        return b;
    }

    // return (a > b) ? a : b;
}

// Функция для получения минимального значения из двух чисел
int Solution_152::getMin(int a, int b) 
{ 
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
    // return (a < b) ? a : b;
}

int Solution_152::maxProduct(std::vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }

    int maxProduct = nums[0]; // Начальное значение для maxProduct
    int currentMax = nums[0]; // Начальное значение для текущего максимального произведения
    int currentMin = nums[0]; // Начальное значение для текущего минимального произведения

    for (int i = 1; i < n; i++) // Начинаем с i = 1, так как уже использовали nums[0] как начальное значение
    {
        int tempMax = currentMax; // Временная переменная для хранения предыдущего значения currentMax
        int num = nums[i];        // Текущее число для удобства

        // Обновляем текущий максимум
        currentMax = getMax(getMax(num, num * currentMax), num * currentMin);

        // Обновляем текущий минимум
        currentMin = getMin(getMin(num, num * tempMax), num * currentMin);

        // Обновляем максимальное произведение
        if (currentMax > maxProduct)
        {
            maxProduct = currentMax;
        }
    }

    return maxProduct;
}

// 153. Find Minimum in Rotated Sorted Array

/*
#include <vector>
*/

// Функция для получения минимального значения из двух чисел
int Solution_153::getMin(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }

    // return (a < b) ? a : b;
}

int Solution_153::findMin(std::vector<int>& nums)
{
    int n = nums.size();   // Размер массива
    int left = 0;          // Левая граница для бинарного поиска
    int right = n - 1;     // Правая граница для бинарного поиска
    int current = INT_MAX; // Переменная для хранения текущего минимума, инициализируется максимально возможным значением INT_MAX

    while (left <= right) // Пока левая граница не пересеклась с правой
    {
        int mid = left + (right - left) / 2; // Находим середину массива
        if (nums[left] <= nums[mid])         // Если значение слева меньше или равно значению в середине
        {
            current = getMin(current, nums[left]); // Обновляем текущий минимум
            left = mid + 1;                        // Сдвигаем левую границу вправо (исключаем левую часть)
        }
        else if (nums[mid] <= nums[right]) // Если значение в середине меньше или равно значению справа
        {
            current = getMin(current, nums[mid]); // Обновляем текущий минимум
            right = mid - 1;                      // Сдвигаем правую границу влево (исключаем правую часть)
        }
    }

    return current; // Возвращаем найденный минимум
    return -1;
}

// 33. Search in Rotated Sorted Array

/*
#include <vector>
*/

int Solution_33::search(std::vector<int> &nums, int target)
{
    int n = nums.size(); // Получаем размер массива
    int left = 0;        // Левая граница для бинарного поиска
    int right = n - 1;   // Правая граница для бинарного поиска

    while (left <= right) // Пока левая граница не пересеклась с правой
    {
        int mid = left + (right - left) / 2; // Находим средний индекс

        if (nums[mid] == target) // Если элемент найден, возвращаем его индекс
        {
            return mid;
        }

        if (nums[left] <= nums[mid]) // Если левая половина отсортирована
        {
            if (nums[left] <= target && target < nums[mid]) // Ищем в отсортированной левой половине
            {
                right = mid - 1; // Сужаем диапазон поиска на левой половине
            }
            else // Ищем в правой половине
            {
                left = mid + 1; // Сужаем диапазон поиска на правой половине
            }
        }
        else if (nums[mid] <= nums[right])
        {
            if (nums[mid] < target && target <= nums[right]) // Ищем в отсортированной правой половине
            {
                left = mid + 1; // Сужаем диапазон поиска на правой половине
            }
            else // Ищем в левой половине
            {
                right = mid - 1; // Сужаем диапазон поиска на левой половине
            }
        }
    }

    return -1; // Если элемент не найден, возвращаем -1
}

// 15. 3Sum

/*
    #include <vector>
    #include <algorithm>
*/

std::vector<std::vector<int>> Solution_15::threeSum(std::vector<int> &nums)
{
    int n = nums.size();
    std::vector<std::vector<int>> result;

    // Сортировка массива методом вставок
    // Цикл прохода по всем элементам массива
    for (int i = 0; i < n; ++i)
    {
        int key = nums[i]; // Запоминаем текущий элемент
        int j = i - 1;     // Инициализируем индекс предыдущего элемента

        // Цикл сдвига всех элементов больше key вправо на одну позицию,
        // пока не найдем место для вставки key
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j]; // Сдвигаем элемент вправо
            j--;                   // Переходим к предыдущему элементу
        }
        nums[j + 1] = key; // Вставляем key на найденное место
    }

    //std::sort(nums.begin(), nums.end());

    // Поиск троек чисел сумма которых равна нулю
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]) // Пропускаем повторяющиеся элементы
        {
            continue;
        }

        int left = i + 1;  // Индекс элемента, следующего за текущим
        int right = n - 1; // Индекс последнего элемента массива

        while (left < right) // Пока left < right выполняем следующее
        {
            int sum = nums[i] + nums[left] + nums[right]; // Вычисляем сумму трех элементов

            if (sum == 0) // Если сумма равна нулю, значит нашли тройку
            {
                result.push_back({nums[i], nums[left], nums[right]}); // Добавляем тройку в результат

                // Пропускаем повторяющиеся элементы слева и справа
                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--;
                }

                left++;  // Увеличиваем left, чтобы перейти к следующему уникальному элементу
                right--; // Уменьшаем right, чтобы перейти к следующему уникальному элементу
            }
            else if (sum < 0) // Если сумма меньше нуля, увеличиваем left для увеличения суммы
            {
                left++;
            }
            else // Иначе уменьшаем right для уменьшения суммы
            {
                right--;
            }
        }
    }

    return result; // Возвращаем результат
}

// 11. Container With Most Water

/*
#include <vector>
*/

int Solution_11::getMin(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int Solution_11::maxArea(std::vector<int>& height)
{
    int n = height.size();

    int left = 0;      // Индекс левой стены
    int right = n - 1; // Индекс правой стены
    int maxArea = 0;   // Максимальная площадь

    // Используем алгоритм "двух указателей" для эффективного поиска максимальной площади
    while (left < right)
    {
        int h = getMin(height[left], height[right]); // Находим минимальную высоту между левой и правой стенами

        int width = right - left; // Вычисляем ширину прямоугольника, равную разнице между индексами левой и правой стен

        int area = h * width; // Вычисляем текущую площадь прямоугольника как произведение высоты на ширину

        // Если текущая площадь больше максимальной, обновляем значение максимальной площади
        if (area > maxArea)
        {
            maxArea = area;
        }

        // Сравниваем высоты левой и правой стен, чтобы определить следующий шаг
        if (height[left] < height[right])
        {
            left++; // Увеличиваем индекс левой стены
        }
        else
        {
            right--; // Уменьшаем индекс правой стены
        }
    }
    return maxArea; // Возвращаем максимальную площадь прямоугольника, образованного двумя стенами
}

// 206. Reverse Linked List

/*

*/

ListNode_206 *Solution_206::reverseList(ListNode_206 *head)
{

    ListNode_206 *previous = nullptr;       // 1. Создаем указатель на предыдущий элемент
    ListNode_206 *current = head;           // 2. Создаем указатель на тукущий элемент
    while (current != nullptr)              // 3. Идем по циклу и ищем голову
    {
        ListNode_206 *next = current->next; // 4. Сохраняем указатель на следующий элемент
        current->next = previous;           // 5. Говорим указателю, что его поле pNext теперь NULL
        previous = current;                 // 6. Говорим указателю previous, что теперь он указывает на текущий элемент
        current = next;                     // 7. Перемещаем указатель на текущий элемент на следующий элемент
    }                                       // 8. Выходим из цикла
    head = previous;                        // 9. Говорим, что указатель head теперь это указатель на последний элемент
    return previous;
}

// 141. Linked List Cycle

/*

*/

bool Solution_141::hasCycle(ListNode_141 * head)
{
    // Если список пуст или состоит только из одного элемента, цикла нет
    if (head == nullptr || head->next == nullptr)
    {
        return false;
    }

    ListNode_141 *slow = head;       // Медленный указатель
    ListNode_141 *fast = head->next; // Быстрый указатель

    // Пока быстрый и его следующий элемент не пусты
    while (fast != nullptr && fast->next != nullptr)
    {
        // Если медленный и быстрый указатели указывают на один и тот же узел,
        // значит, произошел цикл
        if (slow == fast)
        {
            return true;
        }

        // Перемещение медленного указателя на следующий элемент
        slow = slow->next;
        // Перемещение быстрого указателя на через один элемент (продвижение на 2)
        fast = fast->next->next;
    }

    // Если вышли из цикла, значит, цикла нет
    return false;
}


// 21. Merge Two Sorted Lists

/*

*/

ListNode_21 *Solution_21::mergeTwoLists(ListNode_21 *list1, ListNode_21 *list2)
{
    // Если list1 пуст, возвращаем list2
    if (list1 == nullptr)
    {
        return list2;
    } 
    // Если list2 пуст, возвращаем list1
    else if (list2 == nullptr)
    {
        return list1;
    }

    // Создаем новый список для объединения
    ListNode_21 *mergeTwoLists = new ListNode_21();
    // Указатели для перемещения по list1 и list2
    ListNode_21 *pointer1 = list1;
    ListNode_21 *pointer2 = list2;
    // Указатель для перемещения по новому списку
    ListNode_21 *current = mergeTwoLists;

    // Пока оба указателя указывают на элементы в списках
    while (pointer1 != nullptr && pointer2 != nullptr)
    {
        // Если элемент в list1 меньше или равен элементу в list2
        if (pointer1->val <= pointer2->val)
        {
            current->next = pointer1; // Добавляем элемент из list1 в новый список
            pointer1 = pointer1->next; // Перемещаем pointer1 на следующий элемент
        }
        else
        {
            current->next = pointer2; // Добавляем элемент из list2 в новый список
            pointer2 = pointer2->next; // Перемещаем pointer2 на следующий элемент
        }
        current = current->next; // Перемещаем current вперед
    }

    // Если остались элементы в list1
    if (pointer1 != nullptr)
    {
        current->next = pointer1;
    }
    else // Если остались элементы в list2
    {
        current->next = pointer2;
    }
    
    return mergeTwoLists->next; // Возвращаем начало нового списка (первый элемент)
}

/*
ListNode_21 *Solution_21::mergeTwoLists(ListNode_21 *list1, ListNode_21 *list2) {
    ListNode_21 *point = new ListNode_21(); // Создаем пустой узел для начала нового списка
    ListNode_21 *tail = point; // Указатель на конец нового списка (на данный момент указывает на начало)

    // Пока оба указателя list1 и list2 не станут nullptr
    while (list1 && list2) {
        // Если значение элемента в list1 меньше, чем в list2
        if (list1->val < list2->val) {
            tail->next = list1; // Добавляем элемент из list1 в новый список
            list1 = list1->next; // Перемещаем указатель list1 на следующий элемент
        } else {
            tail->next = list2; // Добавляем элемент из list2 в новый список
            list2 = list2->next; // Перемещаем указатель list2 на следующий элемент
        }
        tail = tail->next; // Перемещаем указатель tail на следующий элемент нового списка
    }

    // Если в одном из списков остались нерассмотренные элементы
    // Добавляем их в конец нового списка
    tail->next = list1 ? list1 : list2;

    return point->next; // Возвращаем начало нового списка (первый элемент)
}
*/

// 23. Merge k Sorted Lists

/*
    #include <vector>
*/

ListNode_23* Solution_23::mergeTwoLists(ListNode_23* list1, ListNode_23* list2)
{
    ListNode_23* pointer = new ListNode_23(); // Создаем новый узел
    ListNode_23* tail = pointer; // Указатель на хвост объединенного списка

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1; // Присоединяем list1 к хвосту
            list1 = list1->next; // Перемещаем указатель list1 на следующий узел
        }
        else
        {
            tail->next = list2; // Присоединяем list2 к хвосту
            list2 = list2->next; // Перемещаем указатель list2 на следующий узел
        }
        tail = tail->next; // Перемещаем tail на только что добавленный узел
    }

    tail->next = list1 ? list1 : list2; // Присоединяем оставшиеся узлы

    return pointer->next; // Возвращаем начало объединенного списка (пропуская пустой узел)
}

ListNode_23* Solution_23::mergeKLists(std::vector<ListNode_23*>& lists)
{
    if (lists.empty())
    {
        return nullptr; // Если список списков пуст, возвращаем nullptr
    }
    
    int n = lists.size();

    while (n > 1)
    {
        int mid = (n + 1) / 2; // Находим середину списка списков
        for (int i = 0; i < n / 2; i++)
        {
            lists[i] = mergeTwoLists(lists[i], lists[i + mid]); // Попарно сливаем списки
        }
        n = mid; // Обновляем количество списков
    }
    return lists[0]; // Возвращаем конечный объединенный список
}

// 19. Remove Nth Node From End of List

ListNode_19 * Solution_19::removeNthFromEnd(ListNode_19 * head, int n)
{
    int k = 0; // Переменная для подсчета количества элементов в списке
    ListNode_19 *counter = head; // Указатель для подсчета элементов

    // Подсчет количества элементов в списке
    while (counter != nullptr)
    {
        counter = counter->next;    // итерируемся по списку вперед
        k++;    // одновляем значение счетчика
    }
    delete counter; // Необходимо удалить counter, чтобы избежать утечки памяти

    int a = k - n;  // расчет индекса удаляемого элемента
    ListNode_19 *previous = head; // создаем временный указатель типа Node и присваиваем ему значение указателя на первый элемент в списке

    // Если индес равен 0, то удаляем первый элеменнт в списке
    if (a == 0)
    {
        head = head->next; // Обновляем head, чтобы он указывал на новое начало списка
        delete previous;   // Удаляем предыдущий первый элемент
        return head;
    }
    // Если индекс больше 0, то идем стандартно по списку
    else if (a > 0)
    {
        // // цикл, который находит элемент с индексом предшествующему идексу на место которого мы хотим поместить обьект
        for (int i = 0; i < a - 1; i++)
        {
            previous = previous->next; // во временную переменную присваиваем указатель на следующую Node списка
        }
    }
    // Если a меньше 0, то элемент для удаления находится далеко за пределами списка
    else if (previous == nullptr)
    {
        return head->next; // Возвращаем новое начало списка
    }

    ListNode_19 *toDelete = previous->next; // переменна нужна для того, чтобы хранить адрес нашего старого элемента на которого указывал наш предыдущий элемент
    previous->next = toDelete->next;        // предыдущему элементу указываем поле адрес и номер через элемент который мы ходим удалить из списка
    delete toDelete;                        // освобождаем данные старого элемента
    return head;                     // Возвращаем измененный список
}

// 143. Reorder List

void Solution_143::reorderList(ListNode_143 * head)
{
    // Проверка наличия хотя бы трех элементов в списке
    if (!head || !head->next || !head->next->next)
    {
        return; // Возвращаемся, если элементов недостаточно для переупорядочивания
    }

    // Создание вектора для хранения ссылок на предыдущие элементы
    std::vector<ListNode_143 *> prevRef;
    ListNode_143 *current = head;
    while (current)
    {
        prevRef.push_back(current); // Сохраняем адрес текущего элемента в векторе
        current = current->next;    // Переходим к следующему элементу списка
    }

    size_t left = 1;                   // Левый указатель для переупорядочивания
    size_t right = prevRef.size() - 1; // Правый указатель для переупорядочивания

    ListNode_143 *temp = head; // Временный указатель для обхода списка
    while (left <= right)
    {
        temp->next = prevRef[right];      // Связываем текущий элемент с элементом справа
        temp->next->next = prevRef[left]; // Связываем следующий элемент текущего элемента с элементом слева
        left++;                           // Перемещаем левый указатель вправо
        right--;                          // Перемещаем правый указатель влево
        temp = temp->next->next;          // Перемещаем временный указатель на два элемента вперед
    }
    temp->next = nullptr; // Завершаем переупорядочивание, устанавливая конец списка
}

/*
void Solution_143::reorderList(ListNode_143 * head)
{
    // Проверяем наличие хотя бы трёх элементов в списке
    if (!head || !head->next || !head->next->next)
    {
        return; // Возвращаемся, так как нельзя переупорядочить
    }

    // Создаём вектор для хранения адресов предыдущих элементов
    std::vector<ListNode_143*> prevRef;

    ListNode_143 *current = head;
    // Проходим по списку и добавляем адреса в вектор
    while (current)
    {
        prevRef.push_back(current);
        current = current->next;
    }

    // Указатель, идущий от начала списка
    ListNode_143 *pointer1 = head;
    // Указатель, идущий от конца списка (берём последний элемент из вектора)
    ListNode_143 *pointer2 = prevRef.back();
    prevRef.pop_back(); // Удаляем последний элемент из вектора, так как его будем использовать

    // Проходимся по списку, переупорядочивая элементы
    while (pointer1 != pointer2 && pointer1->next != pointer2->next)
    {
        // Берём следующий элемент первого указателя
        ListNode_143 *first = pointer1->next;
        // Берём последний элемент из вектора, который станет предыдущим для второго указателя
        ListNode_143 *second = prevRef.back();
        prevRef.pop_back(); // Удаляем из вектора

        // Меняем указатели местами
        pointer1->next = pointer2;
        pointer2->next = first;

        // Сдвигаем указатели
        pointer1 = first;
        pointer2 = second;
    }

    pointer1->next = nullptr; // Завершаем список
}
*/

// 3. Longest Substring Without Repeating Characters

/*
#include <set>
*/

int Solution_3::lengthOfLongestSubstring(std::string s)
{
    int n = s.length();                  // Получаем длину строки
    int count = 0;                       // Инициализируем переменную для хранения максимальной длины подстроки без повторяющихся символов
    std::unordered_map<char, int> unMap; // Создаем хэш-таблицу для отображения символов на их индексы
    int index = 0;                       // Инициализируем индекс для отслеживания начала текущей подстроки

    for (int i = 0; i < n; ++i) // Проходим по строке
    {
        if (unMap.find(s[i]) != unMap.end()) // Если текущий символ уже встречался ранее
        {
            index = std::max(index, unMap[s[i]] + 1); // Обновляем index, чтобы начать новую подстроку после первого вхождения повторяющегося символа
        }

        unMap[s[i]] = i;                        // Записываем индекс текущего символа в хэш-таблицу
        count = std::max(count, i - index + 1); // Обновляем максимальную длину подстроки без повторяющихся символов
    }

    return count; // Возвращаем максимальную длину подстроки без повторяющихся символов
}

// 424. Longest Repeating Character Replacement

/*

*/

int Solution_424::characterReplacement(std::string s, int k)
{
    
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

