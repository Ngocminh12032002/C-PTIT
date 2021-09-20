#include<bits/stdc++.h>
using namespace std;

struct nguoi{
    string ten,ngaySinh;
    string namSinh="";
    string thangSinh="";
    string ngay="";
};

void nhap(struct nguoi &p){
    cin>>p.ten;
    cin>>p.ngaySinh;
}

int main(){
    int n;
    cin>>n;
    struct nguoi list[n];
    for(int i=0;i<n;i++) {
        nhap(list[i]);
        for(int j=list[i].ngaySinh.length()-4;j<list[i].ngaySinh.length();j++){
            list[i].namSinh=list[i].namSinh+list[i].ngaySinh[j];
        }
        for(int j=list[i].ngaySinh.length()-7;j<list[i].ngaySinh.length()-5;j++){
            list[i].thangSinh=list[i].thangSinh+list[i].ngaySinh[j];
        }
        for(int j=list[i].ngaySinh.length()-10;j<list[i].ngaySinh.length()-8;j++){
            list[i].ngay=list[i].ngay+list[i].ngaySinh[j];
        }
        
    }
    struct nguoi max=list[0] ,min=list[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(atoi(min.namSinh.c_str())>atoi(list[j].namSinh.c_str())){
                min=list[j];
            }
            if(atoi(min.namSinh.c_str())==atoi(list[j].namSinh.c_str())){
                if(atoi(min.thangSinh.c_str())>atoi(list[j].thangSinh.c_str())){
                    min=list[j];
                }
                else if(atoi(min.thangSinh.c_str())==atoi(list[j].thangSinh.c_str())){
                    if(atoi(min.ngay.c_str())>atoi(list[j].ngay.c_str())){
                        min=list[j];
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(atoi(max.namSinh.c_str())<atoi(list[j].namSinh.c_str())){
                max=list[j];
            }
            if(atoi(max.namSinh.c_str())==atoi(list[j].namSinh.c_str())){
                if(atoi(max.thangSinh.c_str())<atoi(list[j].thangSinh.c_str())){
                    max=list[j];
                }
                else if(atoi(max.thangSinh.c_str())==atoi(list[j].thangSinh.c_str())){
                    if(atoi(max.ngay.c_str())<atoi(list[j].ngay.c_str())){
                        max=list[j];
                    }
                }
            }
        }
    }
    cout<<max.ten<<"\n"<<min.ten;
}
