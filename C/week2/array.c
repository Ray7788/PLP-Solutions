#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // argc is an integer variable that stores the number of command-line arguments passed by the user including the name of the program. 
    int array[argc-1];
    int a;

//   由command line存入指定的数组array
// 修改下标就成功了
    for(int i = 0; i <argc-1; i++){
        array[i] = atoi(argv[i+1]);
    }

//   按照升序排序 ascending order
    for (int i = 0; i < argc-1; i++){
        for (int j = i + 1; j < argc-1; j++){
            if (array[i] > array[j]){
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

//   打印输出print
    for (int j = 0; j < argc-1; j++){
        printf("%d ", array[j]);
    }

}

// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/09-array
