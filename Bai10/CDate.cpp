#include<iostream>
#include"CDate.h"
using namespace std;
CDate::CDate()
{
	d = m = y = 1;
}
CDate::CDate(int d, int m, int y)
{
	this->d = d;
	this->m = m;
	this->y = y;
}
CDate::CDate(CDate* x)
{
	this->d = d;
	this->m = m;
	this->y = y;
}
CDate::~CDate() {}
void CDate::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> d;
	cout << "Nhap thang: ";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
}
void CDate::Xuat()
{
	cout << d << "/" << m << "/" << y;
}
bool CDate::LaHopLe()
{
	if (y < 1)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (d < 1)
		return false;
	if (d > TimSoNgayTrongThang())
		return false;
	return true;
}
int CDate::TimSoNgayTrongThang()
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;
	if (m == 2)
		if (LaNamNhuan())
			return 29;
		return 28;
	return 31;
}
bool CDate::LaNamNhuan()
{
	if (y % 400 == 0)
		return true;
	if (y % 4 == 0 && y % 100 != 0)
		return true;
	return false;
}
CDate* CDate::TimNgayKeTiep()
{
	CDate* kq = new CDate(*this);
	kq->d++;
	if (kq->d > kq->TimSoNgayTrongThang())
	{
		kq->d = 1;
		kq->m++;
		if (kq->m > 12)
		{
			kq->m = 1;
			kq->y++;
		}
	}
	return kq;
}
CDate* CDate::TimNgayTruocDo()
{
	if (d == 1 && m == 1 && y == 1)
		return NULL;
	CDate* kq = new CDate(*this);
	kq->d--;
	if (kq->d < 1)
	{
		kq->m--;
		if (kq->m < 1)
		{
			kq->y--;
			kq->m = 12;
		}
		kq->d = kq->TimSoNgayTrongThang();
	}
	return kq;
}