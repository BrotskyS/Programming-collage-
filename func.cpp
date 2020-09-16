#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float a, b, c, d, y, k, p, x;
    cin>>a>>b>>c>>d>>y>>k>>p>>x;
    double cs = cos(2*x);
    y = 
    (exp(x+a+pow(b,2))) - log10(fabs(2*c))+ pow(cs,2)
    /
    sqrt(fabs(sin(d) + tan(fabs(k + p - b))) - fabs(d))
    * 
    (a + b);

    cout<<"y="<<y<<endl;
    getchar();
    system("pause");
    return 0;
}