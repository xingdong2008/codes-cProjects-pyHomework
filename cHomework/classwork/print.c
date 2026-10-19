/*
 * print.c
 * 格式化输出 / Formatted output
 *
 * 功能 / Function:
 *   演示 printf 的格式控制：将浮点数按指定宽度和小数位数输出。
 *   Demonstrates printf format control: printing a float with a specified field width and decimal places.
 */

#include <stdio.h>

int main(){
    float g1 = 12.34f,g2 = 0.0f;      // 两个浮点数 / two floats
    printf("%22.4f",g1);              // 宽度 22、保留 4 位小数输出 g1 / print g1 with field width 22 and 4 decimal places

    return 0;
}
//print("space.exact+type")   // 原注释：空格 + 精确度 + 类型 / original note: space + precision + type
