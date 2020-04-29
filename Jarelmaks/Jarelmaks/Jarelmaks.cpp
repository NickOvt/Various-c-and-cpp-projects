#include <iostream>

using namespace std;
bool solved;
int kuud;

void solve(float h, int n, float p) {
	float hVaartus = h;
	float hAlgus = h;
	if (h < 100 || h > 10000) {
		solved = false;
		//return -1;
	}
	else if (n < 1 || n > 120) {
		solved = false;
		//return -1;
	}
	else if (p < 1 || p > 20) {
		solved = false;
		//return -1;
	}
	else {
		for (int i = 1; i <= n; i++) {
			hVaartus = hVaartus - ((p / 100.0) * hVaartus);
			if (h - ((1.0 / (float)n) * hAlgus) < 0) {
				h = 0;
			}
			else if (i == n && h != 0) {
				h = 0;
			}
			else {
				h = h - ((1.0 / (float)n) * hAlgus);
			}
			/*cout << "Jaak:" << h << endl;
			cout << "Vaartus: " << hVaartus << endl;
			cout << endl;*/
			if (i == n) {
				if (hVaartus > h) {
					kuud = n;
					solved = true;
					break;
					//return n;
				}
				else {
					solved = false;
					break;
					//return -1;
				}
			}
			else {
				if (hVaartus > h) {
					kuud = i;
					solved = true;
					break;
					//return i;
				}
			}
		}
	}
}

int main()
{
	float h, p;
	int n;

	cin >> h; cin >> n; cin >> p;
	solve(h, n, p);
	if (!solved) {
		return 1;
	}
	else {
		cout << kuud;
	}
}

