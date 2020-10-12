#include <iostream>
using namespace std;
int faktorijal (int x){
    if (x!=1)
    return x*faktorijal(x-1);
    else 
    return 1;
}

int main(){
int a;
cin >> a;
a=faktorijal(a);
cout << a;
return 0;
}