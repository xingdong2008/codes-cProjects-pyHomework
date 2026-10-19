/*
 * four_operations.c
 * 两数四则运算 / Basic arithmetic on two integers
 *
 * 功能 / Function:
 *   输入两个整数，计算并输出它们的和、差、积、余数和商。
 *   Reads two integers and prints their sum, difference, product, remainder and quotient.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2;                 // 两个输入整数 / the two input integers
    int sum,minus,times,remainder; // 和、差、积、余数 / sum, difference, product, remainder
    float division;                // 商（浮点数）/ quotient (floating-point)
    scanf("%d",&num1);             // 读取第一个整数 / read the first integer
    scanf("%d",&num2);             // 读取第二个整数 / read the second integer
    printf("%d %d\n",num1,num2);   // 回显两个数 / echo the two numbers

    sum = num1 + num2;             // 和 / sum
    minus = num1 - num2;           // 差 / difference
    times = num1*num2;             // 积 / product
    remainder = num1%num2;         // 余数 / remainder
    division = (float)num1/num2;   // 商（转换为浮点数）/ quotient (cast to float)

    printf("sum = %d\nminus = %d\nmutiplication = %d\n",sum,minus,times);
    printf("remainder = %d\n",remainder);
    printf("division = %f",division);
}
