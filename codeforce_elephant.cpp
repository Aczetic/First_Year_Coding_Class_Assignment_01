#include <iostream>

using namespace std;

int main(){
    
 int input;
 cin >> input;
 cout << input/5 + ((input % 5)? 1 : 0) << endl;

    return 0;
}
