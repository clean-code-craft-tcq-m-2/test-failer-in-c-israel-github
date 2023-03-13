
#include <stdio.h>

int networkAlert(float celsius) {
	if (celsius > 100)
	{
		printf("ALERT: Temperature is %.1f celsius.\n", celsius);
		return 500;
	}
	else
	{
		return 200;
	}
}