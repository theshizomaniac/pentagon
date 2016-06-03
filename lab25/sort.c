#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

void bubble_sort(dq queue)
{
     for (int i = 0; i < queue->size-1; i++) {
        swapped = false;
        sort_procedure(queue, i);
     }
 }



 void sort_procedure(dq queue, int i)
 {
    for (int j = 0; j < queue->size-i-1; j++) {
             if (queue->elements[j] < queue->elements[j+1]) {
                 int temp = queue->elements[j];
                 queue->elements[j] = queue->elements[j+1];
                 queue->elements[j+1] = temp;
                 swapped = true;
             }
    }
    if(!swapped) return;
 }


