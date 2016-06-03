#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

dq create_queue(){
    dq res=(dq)malloc(1*sizeof(queue));
    res->elements=(int*)malloc(5*sizeof(int));
    res->size=0;
    res->elements[5]='\0';
    res->right=4;
    res->left=0;
    res->max=5;
    return res;
}

void push_front(dq queue,int a){
    if(queue->right-queue->left!=0){
        queue->elements[queue->left]=a;
        queue->left+=1;
    }else{
        int temp=queue->max*2*2;
        temp*=Lucky_number;
        int r_elem=0;
        for(int i=queue->right+1;queue->elements[i]!='\0';i++){
            r_elem++;
        }
        int prev=queue->max;


        queue->elements=(int*)realloc(queue->elements,(temp)*sizeof(int));
        queue->elements[temp]='\0';

        queue->max=temp;
        for(int i=prev+1;i<=queue->max;i++){
            queue->elements[i]=0;
        }
        int numbers_in_left=prev-queue->right-1;
        int perestanovka=queue->right+numbers_in_left;
        int max_cur=queue->max-1;
        for(int i=0;i<prev-queue->right;i++){
            queue->elements[max_cur]=queue->elements[perestanovka];
            max_cur--;
            perestanovka--;
        }
        queue->right=queue->max-numbers_in_left-1;
        for(int i=queue->left+1;i<queue->right;i++)
            queue->elements[i]=0;
        queue->elements[queue->left]=a;
        queue->left++;
    }
    queue->size++;
}
int is_empty(dq queue){
    return !queue->size>0;
}
void print_queue(dq queue){
    for(int i=0;i<queue->size;i++){
        printf("--");
    }
    printf("\n");
    if(!is_empty(queue)) {
        for (int i = queue->left - 1; i >= 0; i--)
            printf("%d ", queue->elements[i]);
        for (int i = queue->max - 1; i > queue->right; i--)
            printf("%d ", queue->elements[i]);
        printf("|\n");
        for(int i=0;i<queue->size;i++){
            printf("--");
        }
        printf("\n");
    }else{
        printf("QUEUE is empty\n");
    }
}
void pop_back(dq queue){
    if(!is_empty(queue)) {
        if (queue->right != queue->max - 1) {
            queue->right++;
            queue->elements[queue->right] = 0;
        } else {
            int num = queue->left;
            for (int i = 0; i < num; i++) {
                queue->elements[i] = queue->elements[i + 1];
            }
            queue->left--;
            queue->elements[queue->left] = 0;
        }
        queue->size--;
    }else{
        printf("QUEUE IS EMPTY!!!!\n");
    }
}

void print_menu(){
    printf("|----------------------------------------------|\n");
    printf("   		     Menu                     \n");
    printf("|----------------------------------------------|\n");
    printf("0.Print menu	 \n");
    printf("1.Push	  	   \n");
    printf("2.Pop            \n");
    printf("3.Sort                              \n");
    printf("4.Quit                                \n");
    printf("|----------------------------------------------|\n");
}

