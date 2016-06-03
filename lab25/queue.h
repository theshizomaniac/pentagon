#ifndef LAB25_queue_H
#define LAB25_queue_H
#define Lucky_number 7
typedef struct queue{
    int left;
    int right;
    int* elements;
    int size;
    int max;
}queue;

typedef struct queue* dq;

dq create_queue();
void push_back(queue*,int);
void pop_back(queue*);
void push_front(queue*,int);
void pop_front(queue*);
void print_queue(queue*);
int is_empty(queue*);
void print_menu();
int top_front(queue*);
int top_back(queue*);

#endif //LAB25_queue_H

