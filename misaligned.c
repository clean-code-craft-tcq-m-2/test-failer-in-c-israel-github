#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

char Line[30];

void addStr(const char* Str, int idx)
{
	unsigned long int i = 0;
	
	for (i = 0; i < strlen(Str); i++, idx++)
	{
		Line[idx] = (Str[i]);
	}
}

void makeHeader()
{
	const char* Num = "Number";
	const char* Maj = "Major";
	const char* Min = "Minor";
	
	memset(Line, ' ', sizeof(Line)); //Fill with spaces
	Line[7] = '|'; //Add separators
	Line[16] = '|';
	
	addStr(Num, 0);
	addStr(Maj, 9);
	addStr(Min, 18);
	printf("%s\n", Line);
	
	memset(Line, '-', sizeof(Line));
	printf("%s\n", Line);
}

int printColorMap() {
	
	int i = 0;
	int j = 0;
	int idx = 0;
	char tempNum[3];
	
	printf("Color map \n");
	makeHeader();
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			memset(Line, ' ', sizeof(Line)); //Fill with spaces
			Line[7] = '|'; //Add separators
			Line[16] = '|';
			
			idx = 5 * i + j + 1;
			sprintf(tempNum, "%d", idx);
			addStr(tempNum, 0);
			addStr(majorColor[i], 9);
			addStr(minorColor[j], 18);
			printf("%s\n", Line);
		}
	}
	return idx;
}

int main() {
	int result = printColorMap();
	assert(result == 25);
	printf("All is well (maybe!)\n");
	printf("Strings can be complicated\n");
	return 0;
}