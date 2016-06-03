#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
#include "sort.h"
int main(){
    dq r;
    r = create_queue();
    print_menu();
    int x,c;
    while(1){
        scanf("%d",&x);
        switch (x){
            case 0:
                print_menu();
                break;
            case 2:
                pop_back(r);
                print_queue(r);
                break;
            case 1:
                scanf("%d",&c);
                push_front(r,c);
                print_queue(r);
                break;
            case 3:
                // sorting(r,q,temp);
                bubble_sort(r);
                print_queue(r);
                break;
            case 4:
                return 0;
            default:
                return 0;
        }
    }
}

