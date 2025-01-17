//#include <iostream>
//using namespace std;
//bool is_poly(int n) {
//	int reversed = 0;
//	int temp = n;
//	while (temp != 0) {
//		reversed = reversed * 10 + temp % 10;
//		temp /= 10;
//	}
//	return reversed== n;
//}
//int main() {
//	int n; cin >> n;
//
//}
//#include <iostream>
//using namespace std;
//int len(int n) {
//	int c = 0;
//	if (n == 0) return 1;
//	for (int temp = n; temp > 0; temp /= 10) {
//		c++;
//	}
//	return c;
//}
//int numn(int k, int n) {
//	int l = len(k);
//	if (l < n) return -1;
//	return ((k / (int(pow(10, l-n))))%10);
//}
//int main() {
//	//int n,k; cin >> k>>n;
//	//cout << numn(k, n);
//	int n1, n2; cin >> n1 >> n2;
// 	int** a = new int* [n1];
//	int ans = -1, max = 0;
//	for (int i = 0; i < n1; i++) {
//		a[i] = new int[n2];
//		int temp = 0;
//		for (int j = 0; j < n2; j++) {
//			cin >> a[i][j];
//			if ((numn(a[i][j], 3)) != -1) temp += numn(a[i][j], 3);
//		}
//		if (temp > max) { max = temp; ans = i; }
//	}
//	if (ans == -1) cout << "no such";
//	else cout << ans;
//} 
//#include <iostream>
//using namespace std;
//bool is_fib(int n){
//	int temp1 = 1,temp2=1;
//	if (n == 0 || n == 1) return 1;
//	for (int k = n,temp3; k <= n; k = temp3) {
//		temp3 = temp1 + temp2;
//		temp1 = temp2;
//		temp2 = temp3;
//
//		if (n == temp3) return true;
//	}
//	return false;
//}
//int main() {
//	int n; cin >> n;
//	cout<<is_fib(n);
//}
#include <iostream>
#include <numeric>

using namespace std;
int numN(int n, int k) {
	int l = 0;
	int reversed = 0;
	for (int temp = k; temp != 0; temp /= 10, l++);
	for (; k != 0;  reversed = reversed * 10 + k % 10,k /= 10);
	return ((reversed / int(pow(10, l - n))) % 10);
}
int main() {
	int n,k; cin >> k>>n;
	cout << numN(n, k);
	
}