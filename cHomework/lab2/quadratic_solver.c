/*
 * quadratic_solver.c
 * 一元二次方程求解 / Quadratic equation solver
 *
 * 功能 / Function:
 *   输入三个系数 a、b、c（用逗号分隔），求解一元二次方程 ax^2 + bx + c = 0 的实根。
 *   Reads three coefficients a, b, c (comma-separated) and solves the real roots
 *   of the quadratic equation ax^2 + bx + c = 0.
 *
 * 输出 / Output:
 *   若判别式 delta >= 0，输出两个实根 x1、x2；否则提示无解。
 *   If the discriminant delta >= 0, prints the two real roots x1, x2;
 *   otherwise prints a "no solution" message.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double delta;                       // 判别式 / discriminant
    double a,b,c;                       // 二次项、一次项、常数项系数 / coefficients of x^2, x, and the constant term
    double result1,result2;             // 两个实根 / the two real roots
    scanf("%lf,%lf,%lf",&a,&b,&c);      // 读取三个系数（逗号分隔）/ read three coefficients (comma-separated)
    delta = b*b - 4*a*c;                // 计算判别式 / compute the discriminant

    if(delta >= 0){                     // 有实根的情况 / case where real roots exist
        result1 = (-b+sqrt(delta))/(2*a);   // 求根公式（加号）/ quadratic formula (plus)
        result2 = (-b-sqrt(delta))/(2*a);   // 求根公式（减号）/ quadratic formula (minus)
        printf("x1 = %f, x2 = %f",result1,result2);  // 输出两个根 / print the two roots
    }
    else
    printf("there is no solution to this problem");  // 判别式小于 0，无实数解 / no real solution when delta < 0
}
