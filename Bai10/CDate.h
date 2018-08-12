class CDate
{
private:
	int d, m, y;
public:
	CDate();
	CDate(int d, int m, int y);
	CDate(CDate* x);
	~CDate();
	void Nhap();
	void Xuat();
	bool LaHopLe();
	CDate* TimNgayKeTiep();
	CDate* TimNgayTruocDo();
	int TimSoNgayTrongThang();
	bool LaNamNhuan();
};