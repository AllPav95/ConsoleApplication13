//Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры)

#include <iostream>

//int main() {
//    int a;
//    std::cout << "Enter value a: ";
//    std::cin >> a;
//
//    if (a < 1 || a > 500) {
//        std::cout << "The value of a must be between 1 and 500." << std::endl;
//        return 1;
//    }
//
//    int sum = 0;
//    for (int i = a; i <= 500; ++i) {
//        sum += i;
//    }
//
//    std::cout << "Sum of numbers from " << a << " before 500: " << sum << std::endl;
//
//    return 0;
//}

//Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y.

//#include <cmath>
//
//int main() {
//    int x, y;
//    std::cout << "Enter an integer x: ";
//    std::cin >> x;
//
//    std::cout << "Enter an integer y (power): ";
//    std::cin >> y;
//
//    double result = std::pow(x, y);
//
//    std::cout << x << " to a degree " << y << " equals " << result << std::endl;
//
//    return 0;
//}

//Найти  от 1 до 1000

//int main() {
//    int start = 1;
//    int end = 1000;
//    int sum = 0;
//    int count = end - start + 1;
//
//    for (int i = start; i <= end; ++i) {
//        sum += i;
//    }
//
//    double average = static_cast<double>(sum) / count;
//
//    std::cout << "Arithmetic mean of " << start << " before " << end << " equals " << average << std::endl;
//
//    return 0;
//}

//Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры : 1 <= a <= 20)
    
//    int main() {
//    int a;
//    std::cout << "Enter value a (1 <= a <= 20): ";
//    std::cin >> a;
//
//    if (a < 1 || a > 20) {
//        std::cout << "The value of a must be between 1 and 20." << std::endl;
//        return 1;
//    }
//
//    long long product = 1; // Используем long long, чтобы избежать переполнения
//
//    for (int i = a; i <= 20; ++i) {
//        product *= i;
//    }
//
//    std::cout << "Product of numbers from " << a << " befor 20: " << product << std::endl;
//
//    return 0;
//}

//Написать программу, которая выводит на экран таблицу умножения на k, где k — номер варианта.
//Например, для 7 - го варианта :
//7 x 2 = 14;
//7 x 3 = 21

//int main() {
//    int k;
//    std::cout << "Enter option number (integer): ";
//    std::cin >> k;
//
//    std::cout << "Multiplication table for " << k << ":" << std::endl;
//
//    for (int i = 1; i <= 10; ++i) {
//        int result = k * i;
//        std::cout << k << " x " << i << " = " << result << std::endl;
//    }
//
//    return 0;
//}
