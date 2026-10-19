/*
 * score_grade.c
 * 成绩等级 / Score grading
 *
 * 功能 / Function:
 *   输入一个分数，按 90 分及以上为优秀、60 分以下为不及格、其余为一般来输出等级。
 *   Reads a score and prints "Excellent" for 90 or above, "Dismal" for below 60,
 *   and "Typical" otherwise.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
float score;                          // 输入的分数 / the input score
scanf("%f", &score);                  // 读取分数 / read the score
if(score >= 90)                       // 90 分及以上 / 90 or above
printf("Excellent.\n");               // 优秀 / excellent
else if(score < 60)                   // 60 分以下 / below 60
printf("Dismal.\n");                  // 不及格 / dismal
else                                  // 其余情况 / otherwise
printf("Typical.\n");                 // 一般 / typical
return 0;
}
