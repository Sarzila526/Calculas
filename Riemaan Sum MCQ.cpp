#include <iostream>
using namespace std;
 
int main ()
{
    int n,N,a,b;
    float x;
    double sum,LR,RR,MR,T,t;
    double LRS, RRS, MRS, TR;
    double val[20];
    
    cout<< "a: ";
    cin>> a;
    cout<< "b: ";
    cin>> b;
    cout<< "N: ";
    cin>> N;
    n = N+1;
    x= (float)(b-a)/N;
    cout<< "x: "<< x <<endl;
    cout<< "Interval Points : "<< n <<endl;
    
    cout<< "Value of points: ";
    for(int i=0; i<n; i++)
    {
        cin>> val[i];
        sum += val[i];
        LR += val[i-1];
        RR = sum-val[0];
        t = sum-val[0]-val[n-1];
        T = val[0]+ (2*t) +val[n-1];
    }
    cout<< "Value of middle points: ";
    for(int j=0; j<n-1; j++)
    {
        cin>> val[j];
        MR += val[j];
    }
    
    LRS = x*LR;
    RRS = x*RR;
    MRS = x*MR;
    TR = (x/2)*T;
    cout << endl;
    cout << "Left Riemann Sum: " <<LRS <<endl;
    cout << "Right Riemann Sum: " <<RRS <<endl;
    cout << "Middle Riemann Sum: " <<MRS <<endl;
    cout << "Trapezoidal Sum : " <<TR <<endl;
    return 0;
}