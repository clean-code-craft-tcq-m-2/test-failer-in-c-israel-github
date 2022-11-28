#include <stdio.h>
#include <assert.h>

char size(int cms) {
	char sizeName = '\0';
	if(cms <= 38) {
		sizeName = 'S';
	} else if(cms > 38 && cms < 42) {
		sizeName = 'M';
	} else if(cms >= 42) {
		sizeName = 'L';
	}
	return sizeName;
}

int main() {
	assert(size(38) == 'S');
	assert(size(39) == 'M');
	assert(size(42) == 'L');
	printf("All is well (maybe!)\n");
	return 0;
}	
