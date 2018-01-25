// lab 12.cpp : Defines the entry point for the console application.
//

#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"
#include "stdio.h"
#include "stdbool.h"
#include "math.h"


int main(){
	FILE* file1;
	FILE* file2;
	int q = 1;
	int i = 1;
	char s;

	file1 = fopen("input.txt","r");
	file2 = fopen("output.txt", "w");

	if (file1 == NULL) printf("error\n");
	else printf("OK\n");
	
	while ((s = fgetc(file1)) != EOF) {
		if (q % 2 == 0) {
			fprintf(file2, "%c", s);
		}
		if (s == '\n') {
			q++;
		}
	}
	fclose(file1);
	fclose(file2);
    return 0;
}

