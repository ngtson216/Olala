#include <iostream>
#include <fstream>
#define FOR(i,n) for (int i=(0);i<n;i++)
using namespace std;

class PhanSo
{
protected:
	int tu,mau;
public:
	PhanSo(){}
	PhanSo(int a, int b)
	{
		tu = a;
		mau = b;
	}
	~PhanSo(){}

	friend istream& operator >> (istream &in, PhanSo &a)
	{
		char temp;
		in >> a.tu >> temp >> a.mau;
		return in;
	}
	friend ostream& operator << (ostream &out, PhanSo a)
	{
		out<<a.tu<<"/"<<a.mau<<endl;
		return out;
	}
};

int main()
{
	PhanSo a;
	int n;
	cout<<"Nhap So Phan So Can Nhap: ";
	cin>>n;
	ofstream file_out("PhanSo.txt");
	cout<<"Nhap Phan So (tu/mau): ";
	FOR(i,n)
	{
		cin>>a;
		file_out<<a;
	}
	file_out.close();
	ifstream in("PhanSo.txt");

	return 0;
}
