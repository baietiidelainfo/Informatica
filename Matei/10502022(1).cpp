#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

void vocale(char s[81], int &v){
    v = 0;
    for(int i = 0; i < strlen(s); i++)
        if(strchr("aeiouAEIOU",s[i]))
            v++;
}
int main(){
    char *s;
    char a[512];
    int nr,b;
    cin>>a;
    s = strtok(a," ");
    while(s != NULL){
        vocale(s,nr);

        if(nr == strlen(s))
            b++;
        s = strtok(NULL, " ");
        cout<<s<<endl;
    }
    cout<<b;
}
