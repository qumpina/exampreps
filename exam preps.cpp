#include <iostream>
#include <string>
#include <iterator>
using namespace std;

/*first task*/
//int main() {
//  string s;
//  getline(cin, s);
//  char c;
//  cin >> c;
//  s.insert(s.begin(), c);
//  s.insert(s.end(), c);
//  cout << s;
//}


/*second task*/
//int main() {
//  string s;
//  getline(cin, s);
//  for (int it = 1; it < s.length(); it += 2) {
//    s[it]='X';
//  }
//  cout << s;
//}


/*third task*/
//int main() {
//	string s;
//	getline(cin, s);
//	int k;
//	cin >> k;
//	for (int i = 1; i < s.length()+1; i++) {
//		if (i % k==0) {
//			cout << s[i-1];
//			cout << endl;
//		}
//		else {
//			cout << s[i-1];
//		}
//	}
//}



// fourth task
//int main() {
//    string s;
//    getline(cin, s);
//    string result;
//    int start = 0;
//    for (int i = 0; i <= s.size(); ++i) {
//        if (i == s.size() || s[i] == ' ') {
//            string word = s.substr(start, i - start);
//            if (word.size() > 1) {
//                swap(word.front(), word.back());
//            }
//            result += word;
//            if (i != s.size()) {
//                result += ' ';
//            }
//            start = i + 1;
//        }
//    }
//    cout << result;
//}



//fifth task
//int main() {
//	string s1, s2;
//	int k;
//	getline(cin, s1);
//	getline(cin, s2);
//	cin >> k;
//	s1.insert(k,s2);
//	s2.insert(k,s1);
//	cout << s1 << endl << s2;
//	
//}


/*sixth task*/
//int main() {
//    string s;
//    getline(cin, s);
//    string glas = "aeiouyAEIOUY";
//    string result;
//    for (char c : s) {
//        if (glas.find(c) != -1) {
//            result += '*';
//        }
//        result += c;
//    }
//    cout << result;
//}

/*seventh task*/
//int main() {
//    string s;
//    getline(cin, s);
//    string soglas = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
//    string result;
//    for (int i = 0; i < s.size(); ++i) {
//        result += s[i];
//        if (i % 2 != 0 && soglas.find(s[i]) != -1) {
//            result += '#';
//        }
//    }
//    cout << result;
//}


/*eighth task*/
//int main() {
//    string s;
//    char separator;
//    getline(cin, s);
//    cin>>separator;
//    string result;
//    if (!s.empty()) {
//        result += s[0];
//        for (int i = 1; i < s.size(); ++i) {
//            result += separator;
//            result += s[i];
//        }
//    }
//    cout << result;
//}
