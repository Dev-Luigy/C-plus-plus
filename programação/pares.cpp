#include <iostream>
#include <map>

using namespace std;

int main ()
{
	map<int, char> pares;
	int i = 0, counter = 0;
	int numPares = 0;
	cin >> numPares;
	int paresCounter[104];
	for (; i < 104; i++) paresCounter[i] = 0;
	do
	{
		int TamanhoPar = 0; char PePar[2];
		cin >> TamanhoPar >> PePar;
		paresCounter[TamanhoPar] += (PePar[0] == 'D' && pares[TamanhoPar] == 'E') || (PePar[0] == 'E' && pares[TamanhoPar] == 'D') ? 1 : 0;
		pares[TamanhoPar] = PePar[0];
		if (paresCounter[TamanhoPar]) {
			counter++;
			pares[TamanhoPar] = '0/';
			paresCounter[TamanhoPar] = 0;
		}
	} while (--numPares);
	cout << counter << endl;
}
