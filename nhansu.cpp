#include <iostream>
#include <string>
using namespace std;

class NhanSu
{
	private:
	string TenNS;
	float LuongCB;
	public:
	NhanSu()
	{
		TenNS = "";
		LuongCB = 0.0;
	}
	~NhanSu(){}
	
	void SetNS(string a)
	{
		TenNS = a;
	}
	void SetLuongCB(float b)
	{
		LuongCB = b;
	}
	string GetTenNS()
	{
		return TenNS;
	}
	float GetLuongCB()
	{
		return LuongCB;
	}
};

class NhanVien: public NhanSu
{
	private:
	float HSLuong;
	public:
	void GetHSLuong(float a)
	{
		HSLuong = a;
	}
	float GetHSLuong()
	{
		return HSLuong;
	}
	double TinhLuongCB()
	{
		float a = GetHSLuong();
		float b = GetLuongCB();
		return a*b;
	}
};

int main()
{
	float a,b;
	string tennv;
	cout<<"Nhap Ten Nhan Vien: ";
	cin>>tennv;
	cin>>a>>b;
	
	NhanVien A;
	A.SetNS(tennv);
	A.SetLuongCB(a);
	A.GetHSLuong(b);
	cout<<A.TinhLuongCB()<<endl;
	
	return 0;
}
