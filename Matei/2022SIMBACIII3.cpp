#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ofstream out("bac.txt");
    int aux,i,r = 0;
    int n;
    cin>>n;
    for(i = 1; i*5 <= n; i++){
        aux = i;
        cout<<"da";
        r++;
        while(!(aux%5)){
            r++;
            cout<<"nu";
            aux /= 5;
        }
    }
    f = fact(n);
    p = put(r,45);
    out<<n < 6 ? 0 : r;
}
