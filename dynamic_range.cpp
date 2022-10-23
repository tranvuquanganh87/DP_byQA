#include <iostream> 
#include <math.h>
using namespace std;

int f[1000];
int a[1000];
int n,i,j,c,d;

// dynamic range 
int main(){
    cout << "nhap n: " ;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    int maxx = 0;
    d= a[1] - a[0];

    for (int i = 1; i < n; i++){
        if (a[i] - a[i-1] == d){
            f[i] = f[i-1] +1;
            cout  << f[i] << " " ;
        } 
        else{
            cout << f[i-1] << " ";
            if (maxx < f[i-1]) maxx = f[i-1];
            d = a[i+1] - a[i];
            //cout<< maxx;
        }
    }
    cout<< "\n";

    for (int i = 0; i < n;i++){
        if (f[i] == maxx){
            for (int j = i - maxx; j  <= i; j++){
                cout<< a[j]<< " " << " ";
            }
        }
    }
    return 0;
}