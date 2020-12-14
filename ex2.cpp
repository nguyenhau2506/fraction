#include<iostream>
using namespace std;
struct phanso
{
	float tu, mau;
};
void input(phanso& x1)
{
	cout << "please enter numberator=" << endl;
	cin >> x1.tu;
	cout << "please enter denominator =" << endl;
	cin >> x1.mau;
}

void output(phanso x1)
{
	cout << "this is numberator = " << x1.tu << endl;
	cout << "this is denominator =	" << x1.mau << endl;
	cout << "this is fraction = " << x1.tu << '/' << x1.mau<<endl;
}
void input(phanso& x, phanso& y)
{
	cout << "please enter a numberator=" << endl;
	cin >> x.tu;
	cout << "please enter a denominator =" << endl;
	cin >> x.mau;
	cout << "please enter b numberator=" << endl;
	cin >> y.tu;
	cout << "please enter b denominator =" << endl;
	cin >> y.mau;

}
int gcd(int a, int b) {
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}
void RutGonPhanSo(phanso x1)
{
	int a = gcd(x1.tu, x1.mau);
	cout << "rut gon phan so =" << x1.tu / a << '/' << x1.mau / a << endl;
}

void TongHaiPhanSo(phanso &x,phanso &y)
{
	phanso sum;
	sum.tu = x.tu * y.mau + y.tu * x.mau;
	sum.mau = x.mau * y.mau;
	int a = gcd(sum.tu, sum.mau);
	cout << " phan so  toi gian	tong hai phan so =" << sum.tu / a << '/' << sum.mau / a << endl;
}
void HieuHaiPhanSo(phanso x,phanso y)
{
	phanso dif;
	dif.tu = x.tu * y.mau - y.tu * x.mau;
	dif.mau = x.mau * y.mau;
	int a = gcd(dif.tu, dif.mau);

	cout << " phan so  toi gian	hieu hai phan so =" << dif.tu*1.0/a  << '/' << dif.mau*1.0 / a << endl;
}
void TichHaiPhanSo(phanso x,phanso y)
{
	phanso mul;
	mul.tu = x.tu * y.tu;
	mul.mau = x.mau * y.mau;
	int a = gcd(mul.mau, mul.tu);
	cout << "phan so toi gian cua tich hai phan so " << mul.tu / a << '/' << mul.mau / a<<endl;
}
void ThuongHaiPhanSo(phanso x, phanso y)
{
	phanso div;
	div.tu = x.tu * y.mau;
	div.mau = x.mau * y.tu;
	int a = gcd(div.tu, div.mau);
	cout << "phan so toi gian cua thuong hai phan so" << div.tu / a << '/' << div.mau / a << endl;
}
void PhanSoToiGian(phanso x)
{
	phanso sim1;
	sim1.tu = x.tu; sim1.mau = x.mau;
	
	int a = gcd(x.tu, x.mau);
	if (a == 1)
	{
		cout <<"day  la phan so toi gian" << endl;
	}
	else
		cout << " day la phan so khong  toi gian" << endl;
	
}

void QuyDongPhanSo(phanso x, phanso y)
{
	phanso a, b;
	a.tu = x.tu * y.mau;
	b.tu = y.tu * x.mau;
	int mauchung = x.mau * y.mau;
	cout << " quy dong phan so a = " << a.tu << '/' << mauchung << endl;
	cout << " quy dong phan so b =" << b.tu << '/' << mauchung << endl;
}
void SoSanh(phanso x, phanso y)
{
	if (x.mau == y.mau && x.tu == y.tu)
	{
		cout << 0 << endl;
	}
	if (x.mau == y.mau)
	{
		if (x.tu > y.tu)
		{
			cout << 1 << endl;
		}
		else if(x.tu<y.tu)
			cout << -1 << endl;
	}
	if (x.tu == y.tu)
	{
		if (x.mau > y.mau)
		{
			cout << -1 << endl;
		}
		else if ( x.mau<y.mau)
			cout << 1 << endl;
	}
	if (x.tu < y.tu && x.mau < y.mau)
	{
		cout << 1 << endl;
	}
	if (x.tu > y.tu && x.mau > y.mau)
		cout << -1 << endl;
}
int main()
{
	int chon;
	phanso x, y;
	cout << "vui long chon chuc nang ban muon lam" << endl;
	cout << "    ***********************      " << endl;
	cout << "1. xuat phan so" << endl;
	cout << "2. rut gon phan so" << endl;
	cout << "3.tong hai phan so" << endl;
	cout << "4.hieu hai phan so" << endl;
	cout << "5 tich hai phan so " << endl;
	cout << "6. thuong hai phan so" << endl;
	cout << "7.phan so toi gian" << endl;
	cout << "8. quy dong phan so	" << endl;
	cout << "9.so sanh 2 phan so" << endl;
	do {
		cout << "moi ban chon chuc nang" << endl;
		cin >> chon;
	} while (chon <0 || chon > 10);
	switch (chon)
	{
	case 1:
		input(x);
		output(x);
		break;
	case 2:
		input(x);
		output(x);
		RutGonPhanSo(x);
		break;
	case 3:
		input(x, y);
		TongHaiPhanSo(x, y);
		break;
	case 4:
		input(x, y);
		HieuHaiPhanSo(x, y);
		break;
	case 5:
		input(x, y);
		TichHaiPhanSo(x, y);
		break;
	case 6:
		input(x, y);
		ThuongHaiPhanSo(x, y);
		break;
	case 7:
		input(x);
		PhanSoToiGian(x);
		break;
	case 8:
		input(x, y);
		QuyDongPhanSo(x, y);
		break;
	case 9:
		input(x, y);
		SoSanh(x, y);
		break;

	}
	return 0;
		
}