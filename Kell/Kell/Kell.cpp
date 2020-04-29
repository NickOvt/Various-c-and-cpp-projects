#include <iostream>
#include <string>
#include <cmath>
using namespace std;


float leiaNurk(int tund, int min) {
	

	float minutidNurk = min * 6.0f;
	float tunnidNurk;
	if (tund > 12)
		tund = tund - 12;
	tunnidNurk = ((tund * 30.0f) + ((min/60.0f) * 30.0f));

	float nurk = abs(tunnidNurk - minutidNurk);

	if (nurk > 180)
		nurk = 360 - nurk;

	return nurk;
}

int main()
{
	string kellaaeg;
	string delimiter = ":";
	string token;
	size_t pos = 0;

	cin  >> kellaaeg;

	while ((pos = kellaaeg.find(delimiter)) != string::npos) {
		token = kellaaeg.substr(0, pos);
		kellaaeg.erase(0, pos + delimiter.length());
	}

	printf("%.3f", leiaNurk(stoi(token), stoi(kellaaeg)));
}
