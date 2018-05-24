#include <iostream>
using namespace std;

class Hinh
{
	private:
	float cd,cr;
	
	public:
	Hinh()
	{
		cd = 0;
		cr = 0;
	}
	~Hinh(){}
	void SetCR(float a)
	{
		cr = a;
	}
	void SetCD(float b)
	{
		cd = b;
	}
	int GetCR()
	{
		return cr;
	}
	int GetCD()
	{
		return cd;
	}
	
};

class HCN: public Hinh
{
	public:
	float DT()
	{
		float a = GetCR();
		float b = GetCD();
		return a*b;
	}
	float CV()
	{
		float a = GetCR();
		float b = GetCD();
		return (a+b)*2;
	}
};

int main()
{
	int n,m;
	cin>>n>>m;
	HCN A;
	A.SetCR(n);
	A.SetCD(m);
	cout<<A.DT()<<endl;
	cout<<A.CV()<<endl;

	return 0;
}

//dm anh Minh
