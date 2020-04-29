#include <iostream>
#include <math.h>

bool isDown = false;
bool isBackUp = false;
bool solved;
int i = 0;


void solve(float h, float u, float d, float t) {
	float uFirst = u;
	float hFirst = h;
	float upInOneDay;

	if (h < 1 || h > 1000) {
		solved = false;
	}
	else if (u < 1 || u > 10) {
		solved = false;
	}
	else if (d < 1 || d > 10) {
		solved = false;
	}
	else if (t < 1 || t > 100) {
		solved = false;
	}
	else {
		while (1) {
			if (i == 0) {
				upInOneDay = u - d;
			}
			else {
				u = uFirst - (((float)(i)*t / 100.0) * uFirst);
				if (u < 0)
					u = 0;
				upInOneDay = u - d;
			}
			h = h - upInOneDay;

			/*std::cout << "I: " << i << std::endl;
			std::cout << "H: " << h << std::endl;
			std::cout << "U: " << u << std::endl;
			std::cout << "upInOneDay: " << upInOneDay << std::endl;
			std::cout << std::endl;*/

			if (h == 0 || h < 0) {
				isBackUp = true;
				solved = true;
				break;
			}
			else if (h == hFirst || h > hFirst) {
				i++;
				isDown = true;
				break;
			}

			i++;
		}
	}
}

int main()
{
	float h, u, d, t;

	std::cin >> h >> u >> d >> t;
	solve(h, u, d, t);

	if (isBackUp && solved) {
		std::cout << 1 << " " << i << std::endl;
	}
	else if (isDown && !solved) {
		std::cout << 0 << " " << i << std::endl;
	}
	else {
		return -1;
	}
}

