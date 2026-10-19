/*
 * primefactor.c
 * 质因数分解 / Prime factorization
 *
 * 功能 / Function:
 *   输入一个整数，输出其所有质因数（从小到大）的连乘形式。
 *   Reads an integer and prints its prime factors in ascending order as a multiplication expression.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int input_num;                 // 输入的整数 / the input integer
    int loop_count = 0;            // 已找到的质因数个数 / number of prime factors found
    int prime_factors[100];        // 存放质因数 / stores the prime factors
    int temp_num;                  // 保存原始输入用于输出 / keeps the original input for printing

    printf("Enter a number: ");    // 提示输入 / prompt for input
    scanf("%d", &input_num);       // 读取整数 / read the integer
    temp_num = input_num;          // 保存原值 / save the original value

    for(int i = 2; i <= input_num; i++){       // 从 2 开始尝试除数 / try divisors starting from 2
        while(input_num % i == 0){             // 能整除则反复提取该因子 / repeatedly extract this factor while it divides evenly
            prime_factors[loop_count] = i;     // 记录质因数 / record the prime factor
            input_num /= i;                    // 除以该因子 / divide out the factor
            loop_count++;                      // 因子计数加一 / increment the factor count
        }
    }
    printf("%d = ", temp_num);                 // 输出 "原数 = " / print "original = "
    for(int i = 0; i < loop_count; i++){       // 逐个输出质因数 / print each prime factor
        printf("%d ", prime_factors[i]);
        if (i == loop_count - 1){              // 最后一个因子后换行 / newline after the last factor
            printf("\n");
        } else {
            printf("* ");                      // 因子之间用乘号连接 / join factors with a multiplication sign
        }
    }

}
