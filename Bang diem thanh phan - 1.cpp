#include<bits/stdc++.h>
using namespace std;

typedef struct Student
{
    string rollNo,name, classroom;
    float mark1,mark2,mark3;

    void input(){
        getline(cin,rollNo);
        getline(cin,name);
        cin >> classroom;
        cin >> mark1 >> mark2 >> mark3;
    }
    void display(){
        cout << rollNo << " " << name << " " << classroom << " ";
        cout << fixed << setprecision(1) << mark1 << " ";
        cout << fixed << setprecision(1) << mark2 << " ";
        cout << fixed << setprecision(1) << mark3;
    }
};

bool checkSort(Student a,Student b){
    if(a.rollNo.compare(b.rollNo) < 0) return true;
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<Student> studentList(n);
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        studentList[i].input();
    }
    sort(studentList.begin(),studentList.end(),checkSort);
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " ";
        studentList[i].display();
        cout << endl;
    }
    
}
