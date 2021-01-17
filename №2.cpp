#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std; 

int main(int argc, char* argv[])
{
	setlocale(0, "rus"); 

	int N, A, D;
	cout << "Введите количество элементов в массиве: ";
	cin >> N;
	int* arr = new int[N];
	cout << "Введите A[0]: ";
	cin >> A;
	cout << "Введите D: ";
	cin >> D;

	for (int i = 0; i < N; i++)
		cout << "A[" << i << "] " << "=" << A * pow( D , i)<< endl;
	return 0;
}