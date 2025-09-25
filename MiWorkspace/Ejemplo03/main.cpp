#include <iostream>
using namespace std;

int main(int argc, char **argv){
	int x = 'a';
    x = x + 1;
    char c = x;
    cout << "El valor int \"x\" es " << x << "." << endl;
    cout << "El valor char \"c\" es " << c << "." << endl;
    
	return 0;
}