#include <iostream>
using namespace std;

void lineOne() {
    cout << "+---+---+---+" << endl;
}

void lineTwo(int i) {
    cout << "| "  << i <<" | "  << i+1 << " | " << i+2 <<" |" << endl;
}

int main () {
    for (int i=1; i<9; i=i+3) {
        lineOne();
        lineTwo(i);   
    }
    lineOne();
    return 1;
}