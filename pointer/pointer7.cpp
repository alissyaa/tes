#include <iostream>
using namespace std;
int main() {
int num[10],i;
int *start, *end;
start= &num[0];
end= &num[9];i=1;
while(start != end) { //berhenti kalau misalnya  gak sma dgn end
cout << "Masukkan bilangan ke "<<i<<":";
cin>> *start;
i++;
start++;
}
system("pause");
}