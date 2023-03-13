
#include <stdio.h>

int networkAlertStub(float celsius) {
	printf("ALERT: Temperature is %.1f celsius.\n", celsius);
	// Return 200 for ok
	// Return 500 for not-ok
	// stub always succeeds and returns 200
	return 200;
}