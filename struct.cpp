#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;
    r.length=10;
    r.breadth=10;
    cout<<sizeof(r.length);
    return 0;
}