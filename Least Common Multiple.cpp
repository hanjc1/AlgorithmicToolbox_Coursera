#include <iostream>

long long lcm_naive(int a, int b) {
	for (long l = 1; l <= (long long)a * b; ++l)
		if (l % a == 0 && l % b == 0)
			return l;

	return (long long)a * b;
}

//int gcd(int a, int b, int c, int z) {
	//if (b == 0 && c==0 )
	//	return a;
	//return gcd(b, a % b && c, a % c);

	//return gcd(b, a % b);

//}

int gcdtest(int a, int b) {
	if (b == 0)
		return a; 
	return gcdtest(b, a % b);
}

int main() {
	long long a, b;
	long long c = 0;
	std::cin >> a >> b;
	c = a * b;
	//std::cout << gcd(a, b, c, z) << std::endl;
	gcdtest(a, b);
	

	std::cout << c/gcdtest(a,b) << std::endl;
	return 0;
}
