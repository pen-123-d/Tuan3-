#include <iostream>
#include <time.h>
using namespace std;

void Tinh_Tong(int a[100][100], int dong, int cot)
{
	int tong=0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			tong = tong + a[i][j];
		}
		cout << tong << endl;
		tong = 0;
	}

}


int main()
{
	int a[100][100], dong, cot;
	cout << "Vui long nhap so dong " << endl;
	cin >> dong;
	cout << "Vui long nhap so cot " << endl;
	cin >> cot;
	srand(time(NULL));

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			a[i][j] = rand() % (20 + 1);
		}
	}
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	Tinh_Tong(a, dong, cot);

	system("pause");

}
