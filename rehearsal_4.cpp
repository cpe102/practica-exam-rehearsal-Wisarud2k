#include <iostream>
#include<string>
using namespace std;

string compress(string N){
    string c=N;
    string y="";
    int i=0;
    while(i <= N.size()){
        y=y+c[i];
        i=i+3;
    }
    return y;
}
//Write compress() here.

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string j = compress("CPECMU");
    string k = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n"<<j<<"\n"<<k<<"\n";

}
