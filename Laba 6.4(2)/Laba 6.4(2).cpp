#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int i)
{

	if (i < size)
	{
		a[i] = rand() % 100 - 15;
		return Create(a, size, i + 1);
	}
}
void Print(int* a, const int size, int i)
{
	if (i <= size)
	{
		if (i == 0)
			cout << setw(4) << 0;
		cout << setw(4) << a[i];
		return Print(a, size, i + 1);
		cout << endl;
	}
}
int Min(int* a, const int size, int i, int min)
{
	if (abs(a[i]) < abs(min))
		min = abs(a[i]);
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}
int Sum(int a[], const int i) 
{
	if (i < 0)
		return 0;
	else
		return abs(a[i]) + Sum(a, i - 1);
}
void foo(int size, int a[])
{

	for (int i = 0; i < size; i++)
	{
		a[0] = 0;
		if (i == 0)
			cout << a[1] << " ";
		if (i % 2 == 0)
			cout << a[i + 1] << ' ';
		if (i % 2 != 0)
			cout << a[i - 1] << " ";
	}

}
int main()
{
	srand((unsigned)time(NULL));
	int size;
	cout << "size = "; cin >> size;
	int* a = new int[size];
	int i = 0;
	Create(a, size, i);
	Print(a, size, i);
	cout << endl;
	cout << "Min = " << Min(a, size, 0, a[1]) << endl;
	cout << "S = " << Sum(a, size - 1) << endl;
	foo(size, a);
	delete[] a;
	return 0;
}