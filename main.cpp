#include <iostream>
using namespace std;

int main() {
    int l1, l2;
    cin>> l1;
    while(l1>0)
    {
        l2=l2 * 10 + l1%10;
        l1= l1/10;
    }
    cout<< l2;
}
