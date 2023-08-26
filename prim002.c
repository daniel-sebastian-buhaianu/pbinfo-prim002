#include <stdio.h>

int main()
{
	unsigned n, d = 2, p, cmmdp = 1;
	scanf("%u", &n);

	while (d*d <= n) {
		p = 0;

		while (n % d == 0) { n /= d; p++; }

		if (p && cmmdp < d) cmmdp = d;

		d++;
	}

	if (n > 1) cmmdp = n;

	printf("%u", cmmdp);

	return 0;
}

// scor 50
