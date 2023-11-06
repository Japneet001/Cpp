#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    long l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &a,&l,&ch,&f,&d);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", a,l,ch,f,d);
    return 0;
    
}
