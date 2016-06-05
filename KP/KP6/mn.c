#include <stdio.h>
#include "DT.h"

int main(int args,char* arg[]){
	int print_menu_once=0;
	for (int i=0; i < args; i++) {
			if(cmp(arg[i],"-once")) {
				print_menu_once=1;
			}
	}
	if(print_menu_once) print_menu();
	while (1) {
		if (!print_menu_once) {
			print_menu();
		}
		int n;
		char base_name[25];
		char person_name[10];
		int delp, group;
		printf("Choose an Option\n");
		scanf("%d",&n);
		switch (n) {
            case 0:
                printf("Write an existing base name:\n");
                scanf("%s",base_name);
                check_path(base_name);
                break;
			case 1:
				printf("Write a base name:\n");
				scanf("%s",base_name);
				create_a_base(base_name);
				printf("----------------------\n");
				break;
			case 2:
				add_new_elements(base_name);
				printf("----------------------\n");
				break;
			case 3:
				add_random_elements(base_name);
				printf("----------------------\n");
				break;
			case 4:
				print_a_base(base_name);
				printf("----------------------\n");
				break;
			case 5:
				scanf("%d",&looser);
				remove_nth_element(base_name,delp);
				printf("----------------------\n");
				break;
			case 6:
				scanf("%s",person_name);
				delete_with_same_name(base_name,person_name);
				printf("----------------------\n");
				break;
			case 7:
                printf("Enter group number: \n");
                scanf("%d", &group);
				task(base_name, group);
				printf("----------------------\n");
				break;
			case 8:
				erase_the_base(base_name);
				printf("----------------------\n");
				break;
			case 9:
				quit();
				break;
			default:
				printf("Wrong input\n");
		}
	}
	return 0;
}

