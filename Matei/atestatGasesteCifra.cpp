#include <iostream>
#include <fstream>
using namespace std;

int gaseste_cifra(int x, int c){
    int r = 0;
    while(x > 0){
        if(x%10 == c)
            r++;
        x /= 10;
    }
    return r;
}

int main(){
    ofstream out("control.out");
    int cc = 0,ap = 0,nr;
    cin>>nr;
    for(int i = 0; i < 10; i++)
        ap = ap*10 + gaseste_cifra(nr,i);
    while(nr>9) 
        nr = nr%10 + nr/10;
    out<<ap<<endl<<nr;
}