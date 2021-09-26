#include<bits/stdc++.h>
using namespace std;

int dem=0;
class NhanVien{
    public:
        string manhanvien,hoten,gioitinh,ngaysinh,diachi,masothue,ngaykyhopdong;
    public:
        NhanVien(){
            manhanvien=hoten=gioitinh=ngaysinh=diachi=masothue=ngaykyhopdong="";
        }
        
        friend ostream &operator<<(ostream &out,NhanVien &a){
            out<<a.manhanvien<<" "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.masothue<<" "<<a.ngaykyhopdong<<endl;
            return out;
        }
        friend istream &operator>>(istream &in,NhanVien &a){
            dem++;
            if(dem<10) a.manhanvien="0000"+to_string(dem);
            if(dem>=10) a.manhanvien="000"+to_string(dem);
            scanf("\n");
            getline(cin,a.hoten);
            scanf("\n");
            cin>>a.gioitinh;
            scanf("\n");
            cin>>a.ngaysinh;
            scanf("\n");
            getline(cin,a.diachi);
            scanf("\n");
            cin>>a.masothue;
            scanf("\n");
            cin>>a.ngaykyhopdong;
            return in;
        }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
