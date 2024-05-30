#include<iostream> 
#include<stdio.h>
#include<math.h>
using namespace std; 
int main(){
    system("CLS");
    int a, b, c; 
    int discriminant; 

    printf("Input value a: "); 
        scanf("%d", &a); 
    printf("Input value b: "); 
        scanf("%d", &b); 
    printf("Input value c: "); 
        scanf("%d", &c); 
    
    discriminant = pow(b, 2) - 4*a*c;

    cout<<"Discriminant of "<<a<<"x^2+"<<b<<"x+"<<c<<" is : "<<discriminant<<endl; 
    system("pause");
    return 0; 
}