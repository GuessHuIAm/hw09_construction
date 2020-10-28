#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "pepper.h"

int main(){
	srand(time(NULL));

	//making new peppers
	struct pepper *p1 = new_pepper("Carolina Reaper", 2000000, random()%100);
	struct pepper *p2 = new_pepper("Ghost Pepper", 1400000, random()%100);
	struct pepper *p3 = new_pepper("Habanero", 350000, random()%100);

	//printing the peppers
	printf("Pepper 1: \n");
	print_pepper(p1);
	printf("Pepper 2: \n");
        print_pepper(p2);
	printf("Pepper 3: \n");
        print_pepper(p3);


	//changing the peppers' stats
	printf("You ate 10 more Carolina Reapers, 23 more Ghost Peppers, and 172 more Habaneros!\n");
	repepper(p1, "Carolina Reaper", 2000000, (p1->eaten) + 10);
	repepper(p2, "Ghost Pepper", 1400000, (p2->eaten) + 23);
	repepper(p3, "Habanero", 350000, (p3->eaten) + 172);

	//printing the peppers again
	printf("After so many peppers:\n");
        printf("Pepper 1: \n");
        print_pepper(p1);
        printf("Pepper 2: \n");
        print_pepper(p2);
	printf("Pepper 3: \n");
        print_pepper(p3);

	printf("You're most likely dead! Happy Halloween.\n");

	free(p1);
	free(p2);
	free(p3);

	return 0;
}
