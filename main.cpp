#include <iostream>
using namespace std;

int main() {
    int l1, l2,/* l3=l1*/;
    cin>> l1;
    while(l1>0)
    {
        l2=l2 * 10 + l1%10;
        l1= l1/10;
    }
 /*   if (l3==l2){
        cout<<"Tak";
    }
    else{
        cout<<"Nie";
    }*/
    cout<<l2;

    //if robi sie bez klamr, poprawić potem!!
    // DO NAPRAWIENIA!!!!!!!!
    // NIE DZIAŁA po usunięciu klamr

}
