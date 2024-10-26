#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int y;
    cout << "nilai x: "; cin >> x;
    cout << "nilai y: "; cin >> y;
    if(x > y){
        cout << "x lebih dari y";
    } 
    if(y > x){
        cout << "y lebih dari x";
    }
    if (x == y)
    {
        cout << "x sama dengan y";
    }
    
    return 0;
}


