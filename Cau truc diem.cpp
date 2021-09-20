#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
struct Point {
    double x, y;
};
void input(struct Point& a) {
    cin >> a.x >> a.y;
}
double distance(struct Point& a, Point& b) {
    double distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return distance;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
