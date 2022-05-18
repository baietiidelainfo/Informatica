#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out("mat.out");
    int n;
    cin>>n;
    int m[40][40];
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--)
                m[i][j] = (j+i%2*2)%3;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            out<<m[i][j]<<' ';
        out<<endl;
    }
}