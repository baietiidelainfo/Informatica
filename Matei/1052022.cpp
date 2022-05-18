#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char sir[256];
    cin>>sir;
    for(int i = 0; i < strlen(sir); i++){
        cout<<sir[i];
        if(strchr("aeiou", sir[i])){
            cout<<sir[i]-32;
        }
    }
}
