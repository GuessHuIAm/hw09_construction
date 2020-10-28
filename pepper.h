#ifndef PEPPER_H
#define PEPPER_H

struct pepper{
        char name[256];
        int scoville;
	int eaten;
};

void print_pepper(struct pepper *p);
struct pepper * new_pepper(char *n, int s, int e);
void repepper(struct pepper *p, char *n, int s, int e);

#endif
