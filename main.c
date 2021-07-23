//
//  main.c
//  ArrayList
//
//  Created by duh8n on 2021/07/14.
//

#include <stdio.h>
#include "ArrayList.h"

int main(int argc, const char * argv[]) {
    List list;
    int data; int sum=0;
    ListInit(&list);
    
    LInsert(&list, 1); LInsert(&list, 2); LInsert(&list, 3);
    LInsert(&list, 4); LInsert(&list, 5); LInsert(&list, 6);
    LInsert(&list, 7); LInsert(&list, 8); LInsert(&list, 9);
    
    LFirst(&list, &data);
    sum += data;
    printf("%d \n", data);
    while(LNext(&list, &data)){
        printf("%d \n", data);
        sum += data;
    }
    printf("리스트 데이터의 총합은 %d 입니다.\n", sum);
    
    LFirst(&list, &data);
    if(data % 2 == 0 || data % 3 == 0){
        LRemove(&list);
    }
    while(LNext(&list, &data)){
        if(data % 2 == 0 || data % 3 == 0){
            LRemove(&list);
        }
    }
    
    LFirst(&list, &data);
    printf("%d\n", data);
    while(LNext(&list, &data)){
        printf("%d\n", data);
    }
    
    return 0;
}
