#pragma warning(disable:4996)

#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	long lSize;
	char* buffer;

	FILE* pFile = fopen("test.txt", "r");

	fseek(pFile, 0, SEEK_END);
	lSize = ftell(pFile);
	rewind(pFile);

	buffer = (char*)malloc(sizeof(char) * lSize);

	fread(buffer, 1, lSize, pFile);
	printf("%s", buffer);

	fclose(pFile);

	_getch();
	return 0;
}