#include<iostream>
#include<conio.h>
#include"CDate.h"
using namespace std;
void main()
{
	//CDate *x = new CDate();
	//cout << "Nhap ngay thang nam" << endl;
	//x->Nhap();

	CDate* x = new CDate(1, 1, 1);

	if (x->LaHopLe())
	{
		cout << "\nNgay vua nhap: ";
		x->Xuat();
		CDate* NgayMai = x->TimNgayKeTiep();
		cout << "\nNgay mai: ";
		NgayMai->Xuat();
		CDate* HomQua = x->TimNgayTruocDo();
		if (HomQua == NULL)
			cout << "\nKhong tim thay ngay hom qua";
		else
		{
			cout << "\nHom qua: ";
			HomQua->Xuat();
		}
	}
	else
		cout << "\nKhong hop le";

	delete x;

	_getch();
}