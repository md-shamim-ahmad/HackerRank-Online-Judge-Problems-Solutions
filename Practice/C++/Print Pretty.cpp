#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        double num = A;
        int result = 0;
        while(num >= 1) {
            result++;
            num /= 16;
        }
        result += 2;
        cout << showbase;
        cout << hex << nouppercase << setw(result) << (long long) A << endl;
        cout.unsetf ( std::ios::floatfield );
        cout<< fixed <<  setprecision(2);
        cout << showbase << internal << setfill('_');
        result = 0;
        num = B;
        while(num >= 1) {
            result++;
            num /= 10;
        }
        result = 12 - result;
        if(B>0)
            cout << setw(result) << "+" << B << endl;
        else
            cout << setw(result) << "-" << (-1)*B << endl;
        cout.precision(9);
        cout << scientific << uppercase << C <<endl;
	}
	return 0;

}
