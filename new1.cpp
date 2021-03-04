/*Rin57TH4*/
#include<iostream>
#include<string>
#include<iomanip>
#define MAX 100
using namespace std;
class SinhVien//Khởi tạo class sinh vien
{
public:
	void Nhap();//Khai báo các phương thức
	void Xuat();
	float getDiemTB();
private://Các thuộc tính
	int MaSV;
	string TenSV;
	float DiemTB;
};
void SinhVien::Nhap()//Định nghĩa phương thức
{
	cout<<"\nNhap Ma SV:";
	cin>>MaSV;
	cout<<"\nNhap Ten Sinh Vien:";
	fflush(stdin);
	getline(cin,TenSV);
	cout<<"\nNhap Diem TB:";
	cin>>DiemTB;
}
void SinhVien::Xuat()
{
	cout<<setw(15)<<MaSV<<setw(15)<<TenSV<<setw(15)<<DiemTB<<endl;
}
float SinhVien::getDiemTB()//Hàm trả về Điểm TB vì mình để DiemTB là private nên cần cái này
{
	return DiemTB;
}
int TimKiem(SinhVien Arr[],int n)//Hàm Tìm Kiếm trả về vị trí sinh viên có điểm TB cao nhất
{
	float max=Arr[0].getDiemTB();
	int vt=0;
	for(int i=1;i<n;i++)
	{
		if(Arr[i].getDiemTB()>max)
		{
			max=Arr[i].getDiemTB();
			vt=i;
		}
	}
	return vt;
}
void MENU()//MENU chương trình thêm sinh động
{
	SinhVien Arr[MAX];
	int x,index=0,n;
	do
	{
		system("cls");
		cout<<"\n\t\t\t\t\t====================MENU=====================";
		cout<<"\n\t\t\t\t\t1.Nhap vao sinh vien moi.";
		cout<<"\n\t\t\t\t\t2.In ra tat ca cac sinh vien.";
		cout<<"\n\t\t\t\t\t3.In ra sinh vien co diem TB cao nhat.";
		cout<<"\n\t\t\t\t\t4.Thoat!";
		cout<<"\n\t\t\t\t\t Moi ban nhap vao lua chon!";
		cin>>x;
		switch (x)
		{
		case 1:
			{
				system("cls");
				cout<<"\nMoi ban nhap vao so sinh vien can them.";
				cin>>n;
				int dem=0;
				for(int i=0;i<n+index;i++)
				{
					cout<<"\nMoi ban nhap vao thong tin cua sinh vien thu "<<i+1<<endl;
					Arr[i].Nhap();
					dem++;
				}
				index+=dem;
				cout<<"\nDa nhap xong!";
				system("pause");
			}
			break;
		case 2:
			{
				system("cls");
				cout<<"\n\t\tDanh Sach Sinh Vien.\n";
				cout<<setw(15)<<"Ma SV"<<setw(15)<<"Ten SV"<<setw(15)<<"Diem TB"<<endl;
				for(int i=0;i<index;i++)
				{
					Arr[i].Xuat();
				}
				system("pause");
			}
			break;
		case 3:
			{
				system("cls");
				cout<<"\n\t\t\t\t\tNhung Sinh Vien Co Diem TB cao nhat la.\n";
				cout<<setw(15)<<"Ma SV"<<setw(15)<<"Ten SV"<<setw(15)<<"Diem TB"<<endl;
				for(int i=0;i<index;i++)
				{
					if(Arr[TimKiem(Arr,n)].getDiemTB()==Arr[i].getDiemTB())
						{
							Arr[i].Xuat();
							cout<<endl;
						}
				}
				system("pause");
			}
			break;
		default:
			break;
		}
	}
	while(x!=4);
}
int main()
{
	MENU();
	system("pause");
	return 0;
}