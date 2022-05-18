#include <iostream>
#include <fstream>
using namespace std;

int cifre_pare(int x){
    int r = 0;
    bool check = 1;
    while(x > 0){
        if(!(x%2)){
            r += x%10;
            check = 0;
        }
        x /= 10;
    }
    if(check)
        return -1;
    return r;
}

int main(){
    ifstream in("cifra.in");
    int n, nr, cp, maxNr, maxSum = -1;
    in>>n;
    for(int i = 0; i < n; i++){
        in>>nr;
        cp = cifre_pare(nr);
        if(maxSum < cp){
            maxSum = cp;
            maxNr = nr;
        }
    }
    if(maxSum == -1)
        cout<<"doar cifre impare";
    else
        cout<<maxSum<<' '<<maxNr;
}