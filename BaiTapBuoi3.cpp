#include <iostream>
#include <time.h>
using namespace std;

void Tinh_Tong(int a[100][100], int dong, int cot)
{
	int tong = 0;
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
void Xuat_PT_LN_Tren_Tung_Cot(int a[100][100], int dong, int cot)
{
	int VT = a[0][0];

	for (int i = 0; i < cot; i++)
	{
		for (int j = 0; j < dong; j++)
		{
			if (VT < a[j][i])
			{
				VT = a[j][i];
			}
		}
		cout << VT << endl;
		VT = a[0][i];
	}
}
void Xuat_PT_DuongBien_Tren_Duoi_Trai_Phai(int a[100][100], int dong, int cot)
{
	cout << "Duong bien tren" << endl;

	for (int j = 0; j < cot; j++)
	{
		cout << a[0][j] << " ";
	}

	cout << endl;
	cout << "Duong bien duoi " << endl;

	for (int j = 0; j < cot; j++)
	{
		cout << a[dong - 1][j] << " ";
	}

	cout << endl;
	cout << "Duong bien ben trai " << endl;

	for (int j = 0; j < dong; j++)
	{
		cout << a[j][0] << " ";
	}
	cout << endl;
	cout << "Duong bien ben phai " << endl;
	for (int i = 0; i < dong; i++)
	{
		cout << a[i][cot -1] << " ";
	}
	cout << endl;

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
	cout << "Tinh tong tung dong " << endl;
	Tinh_Tong(a, dong, cot);
	cout << "Tinh gia lon nhat tung cot" << endl;
	Xuat_PT_LN_Tren_Tung_Cot(a, dong, cot);
	cout << "Xuat cac phan tu o cac duong bien " << endl;
	Xuat_PT_DuongBien_Tren_Duoi_Trai_Phai(a, dong, cot);
		system("pause");

}
