#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int dian[2][4] = {{1,2,3,4},{5,6,7,8}};
    int i,j;

    for (i=0; i<2; i++) {
        for(j=0; j<4; j++) {
            cout << dian [i][j] << " ";
        } cout << endl;
    }
    
    return 0;
}