#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pepper{
        char name[256];
        int scoville;
        int eaten;
};

//print pepper
void print_pepper(struct pepper *p){
	printf("Pepper: %s\tSpicyness: %d\tAmount eaten: %d\n", p->name, p->scoville, p->eaten);
}

//new pepper
struct pepper * new_pepper(char *n, int s, int e){
	struct pepper *np;

	np = malloc(sizeof(struct pepper));
	strncpy(np->name, n, sizeof(np->name) - 1);
	np->scoville = s;
	np->eaten = e;

	return np;
}

//change the pepper
void repepper(struct pepper *p, char *n, int s, int e){
	strncpy(p->name, n, sizeof(p->name) - 1);
	p->scoville = s;
	p->eaten = e;
}
