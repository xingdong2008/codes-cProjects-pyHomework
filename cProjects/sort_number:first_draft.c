#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//array,a,b
void sorting_sys(int *array,int length){
    for(int right_point = length-1;right_point>0;right_point-- ){
        for(int left_point = 0;left_point<right_point;left_point ++){
            if(array[left_point]>=array[right_point]){
                int temp = array[right_point];
                array[right_point] = array[left_point];
                array[left_point] = temp;
            }
            else{
                continue;;
            }
        }
    }
}
int main(){
    int length;
    printf("please input the length of the array");
    scanf("%d",&length);

    int list[length];

    for(int i = 0;i < length;i++){
        printf("input number%d:",i+1);
        scanf("%d",&list[i]);
    }

    printf("list created\n");

    sorting_sys(list, length);

    while(length-1 >= 0){
        printf("%d,",list[length-1]);
        length--;
    }
    
}
