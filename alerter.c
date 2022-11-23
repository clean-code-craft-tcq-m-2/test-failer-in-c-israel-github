#include <stdio.h>
#include <assert.h>
#include "testStub.h"

int alertFailureCount = 0;

void alertInCelsius(float fahrenheit) {
	float celsius = (fahrenheit - 32) * 5 / 9;
	int returnCode = networkAlertStub(celsius);
	if (returnCode != 200) {
		// non-ok response is not an error! Issues happen in life!
		// let us keep a count of failures to report
		// However, this code doesn't count failures!
		// Add a test below to catch this bug. Alter the stub above, if needed.
		alertFailureCount += 0;
	}
}

int main() {
	alertInCelsius(400.5);
	alertInCelsius(303.6);
    assert(alertFailureCount == 2);
	printf("%d alerts failed.\n", alertFailureCount);
	printf("All is well (maybe!)\n");
	return 0;
}
