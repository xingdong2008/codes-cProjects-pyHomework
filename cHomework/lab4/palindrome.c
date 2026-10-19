/*
 * palindrome.c
 * 回文数判断 / Palindrome number checker
 *
 * 功能 / Function:
 *   输入一个整数，将其逐位拆分，并判断该数是否为回文数。
 *   Reads an integer, splits it into digits, and checks whether it is a palindrome.
 */

#include <stdio.h>
#include <stdlib.h>

void collect_unit_digit(int number, int i, int *unit_digit_collection)
{
    if (number != 0)
    {
        unit_digit_collection[i] = number % 10;   // 取出个位 / take the units digit
        i++;
        number = number / 10;                     // 去掉个位 / remove the units digit
        collect_unit_digit(number, i, unit_digit_collection);   // 递归处理剩余部分 / recurse on the rest
    }
    else
    {
        printf("Unit digit collection completed\n");
    }
}

int main()
{
    long long int number_input;
    int number_count_units = 0;                   // 数字位数 / number of digits
    int loop_count = 0;
    int temp_number;
    char line[100];
    char extra;
    
    printf("Enter a number: ");

    if (fgets(line, sizeof(line), stdin) != NULL &&
        sscanf(line, "%lld %c", &number_input, &extra) == 1) {
        printf("valid input：%lld\n", number_input);   // 有效输入 / valid input
    } else {
        printf("Invalid input\n");
        return 0;
    }

    temp_number = number_input;

    if(number_input <0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }
    
    for (int i = 0; temp_number != 0; i++)
    {   temp_number = temp_number / 10;          // 统计位数 / count the digits
        number_count_units++;
    }

    int unit_digit_collection[number_count_units];
    collect_unit_digit(number_input, loop_count, unit_digit_collection);
    
    int k = 0;

    for (int j = 0;j < number_count_units; j++)
    {
        if(unit_digit_collection[j] != unit_digit_collection[number_count_units - 1 - j])   // 首尾逐位比较 / compare digits from both ends
        {
            k = 1;
            break;
        }
    }
    if(k == 0)
    {
        printf("The number is a palindrome.\n");      // 是回文数 / it is a palindrome
    }
    else
    {
        printf("The number is not a palindrome.\n");  // 不是回文数 / it is not a palindrome
    }
    }
