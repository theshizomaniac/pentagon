#include <stdio.h>
#include <stdlib.h>
#include "kh.h"
#include <time.h>
int main()
{
node create;
create.value=INT_MIN;
create.prev=NULL;
create.next=NULL;
list l=&create;
int i=1, x,k,n;

while(1)
{
    char c[20];
    menu();
    printf("Choose option (number [1..8]): \n");
    scanf("%d", &x);
    switch (x) {
    case 1:
        printf("How much elements you want to add?\n");
        scanf("%d",&k);
        for(int i=0;i<k;i++)
        {
            int val,num;
            printf("Enter value of element:\n");
            scanf("%d",&val);
            printf("Enter number of position:\n");
            scanf("%d",&num);
            insert(l,val,num);
        }
        printf("\nProcess successfuly ended\n");
        print(l);
        break;
    case 2:
        srand(time(NULL));
        printf("How much elements you want to add in the end?\n");
        scanf("%d",&n);
        for(long long j=0;j<n;j++)
        {
            int a;
            a=rand()%26;
            insert(l,a,count(l)+1);
        }
        printf("\nProcess successfuly ended\n");
        print(l);
        break;

    case 3:
        printf("Enter number of element to delete:\n");
        scanf("%d",&n);
        cut_by_number(l,n);
        printf("\nProcess successfuly ended\n");
        print(l);
        break;

    case 4:
        printf("Enter value of element to delete(first element with the same value will be deleted):\n");
        int a;
        scanf("%d",&a);
        cut_by_value(l,a);
        printf("\nProcess successfuly ended\n");
        print(l);
        break;

    case 5:
        row_print(l);
        break;

    case 6:
        column_print(l);
        break;

    case 7:
        printf("List contains %d elements\n\n",count(l));
        break;

    case 8:
        printf("Enter 'k':\n");
        int k;
        scanf("%d", &k);
        l=cut_k(l,k);
        printf("\nProcess successfuly ended\n");
        print(l);
        break;

    case 9:
        delete_list(l);
        printf("List successful deleted\n");
        break;

    default:
        printf("\nBye!\n");
        return 0;
    }

}
}
