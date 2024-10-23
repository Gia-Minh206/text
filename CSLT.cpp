//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int minute, second;
//	cout << "Enter the number of minutes: ";
//	cin >> minute;
//	cout << "Enter the number of seconds: ";
//	cin >> second;
//	for (int i = minute; i >= 0; i--) {
//		for (int j = second; j >= 0; j--) {
//			cout << setfill('0') << setw(2) << i << ":" << setfill('0') << setw(2) << j << " ";
//			if (j == 5 || j == 4 || j == 3 || j == 2 || j == 1) {
//				cout << "Tick - tock";
//			}
//			else if ( j == 0) {
//				cout << "Ding-dong";
//			}
//			cout << endl;
//		}
//		second = 59;
//		}
//    return 0;
//}
//
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int k = 1;
//	while(k==1) {
//		int n;
//		cout << "SIMPLE CALCULATOR" << endl;
//		cout << "1. Addition" << endl;
//		cout << "2. Subtraction" << endl;
//		cout << "3. Multiplication" << endl;
//		cout << "4. Division" << endl;
//		cout << "0. Exit program" << endl;
//		cout << endl;
//		cout << "Your choice: ";
//		cin >> n;
//		cout << endl;
//		if (n==0) {
//			cout << "You exited the program" << endl;
//			break;
//		}
//		int k, i;
//		cout << "Enter the first operand: ";
//		cin >> k;
//		cout << "Enter the second operand: ";
//		cin >> i;
//		cout << "Result: ";
//		if (n==1) {
//			cout << k << " + " << i << " = " << k + i << endl;
//		}
//		else if (n == 2) {
//			cout << k << " - " << i << " = " << k - i << endl;
//		}
//		else if (n == 3) {
//			cout << k << " * " << i << " = " << k * i << endl;
//		}
//		else {
//			if (i == 0) {
//				cout << "INVALID" << endl;
//			}
//			else {
//				cout << k << " / " << i << " = " << k / i << endl;
//			}
//		}
//		cout << "---------------------------------------" << endl;
//	}
//	
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//		float a[1000];
//		float first_student = numeric_limits<float>::max();
//		float last_student = numeric_limits<float>::min();
//		for (int i = 0; i < 1000; i++) {
//			cout << "Enter height: ";
//			cin >> a[i];
//			if (a[i]==0) {
//				break;
//			}
//			first_student = min(first_student, a[i]);
//			last_student = max(last_student, a[i]);
//	}
//	cout << "The height of the first student in the class list: " << first_student << " (m)" << endl;
//	cout << "The height of the last student in the class list: " << last_student << " (m)" << endl;
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	for (int i = 0; i < 26; i++) {
//		cout << static_cast<char>('A' + i) << "  |  " << static_cast<int> ('A' + i) << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 26; i++) {
//		cout << static_cast<char>('a' + i) << "  |  " << static_cast<int> ('a' + i) << endl;
//	}
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	vector<int> v;
//	for (int i = 0; i <= 15; i++) {
//			v.push_back(n % 2);
//			n /= 2;
//			if (n == 0) {
//				break;
//			}
//	}
//	for (int i = v.size()- 1; i >= 0; i--) {
//		cout << v[i];
//	}
//	return 0;
//}
#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int k = 0;
	int j = 1;
	int f = 0;
	for (int i = 0; i <= 92; i++) {
		f = k + j;
		k = j;
		j = f;
		if (i == n) {
			cout << f << endl;
			break;
		}
	}
	return 0;
}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	float popu_A, popu_B, growth_A, growth_B;
//	cin >> popu_A >> popu_B >> growth_A >> growth_B;
//	float growth_rate_A = growth_A / 100, growth_rate_B = growth_B / 100;
//	int year = 0;
//	while (popu_A < popu_B) {
//		popu_A *= (1 + growth_rate_A);
//		popu_B *= (1 + growth_rate_B);
//		year++;
//	}
//	cout << year << endl;
//	cout << popu_A << " " << popu_B << endl;
//	
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int chicken, dog;
//	for (int chicken = 0; chicken <= 36; chicken ++) {
//		dog = 36 - chicken;
//		if (2 * chicken + 4 * dog == 100) {
//			cout << "Chickens: " << chicken << endl;
//			cout << "Dogs: " << dog << endl;
//			break;
//		}
//	}
//		int standing_cow, old_cow, lying_cow;
//	for (int standing_cow = 0; standing_cow <= 100; standing_cow++) {
//		for (int lying_cow = 1; lying_cow <= 100 - standing_cow; lying_cow++) {
//			old_cow = 100 - standing_cow - lying_cow;
//			if ((5 * standing_cow + 3 * lying_cow + old_cow / 3) == 100 ) {
//				cout << "Standing cows: " << standing_cow << endl;
//				cout << "Lying cows: " << lying_cow << endl;
//				cout << "Old cows: " << old_cow << endl;
//			break;
//		}
//	}
//}
//	return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	bool isPrime = true;
//	if (n < 2) isPrime = false;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n%i==0) {
//			cout << "NO";
//			isPrime = false;
//			break;
//		}
//	}
//	if (isPrime) {
//		cout << "YES";
//	}
//	cout << endl;
//	for (int i = n - 1; i >= 2; i--) {
//		bool isPrime = true;
//	if (i < 2) isPrime = false;
//	for (int j = 2; j <= sqrt(i); j++) {
//		if (i%j==0) {
//			isPrime = false;
//		}
//	}
//	if (isPrime) {
//		cout << i << endl;
//		break;
//	}
//	}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int tmp1 = a, tmp2 = b;
//	if (a < b) {
//		swap(a, b);
//	}
//	while (b!=0) {
//		int k = a % b;
//		a = b;
//		b = k;
//	}
//	cout << "UCLN: " << a << endl;
//	int x, y;
//	for (x = -100; x <= a; x++) {
//		y = (a - tmp1 * x) / tmp2;
//		if (tmp1 * x + tmp2 * y == a) {
//			cout << "x = " << x << " " << " y = " << y << endl;
//		}
//	}
//	cout << "BCNN = " << (tmp1 * tmp2) / a << endl;
//	
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int x; cin >> x;
//	int k = 0;
//	cout << "The sequence: ";
//	cout << x << " ";
//	while (x!=1) {
//		if (x % 2 == 0) {
//			x /= 2;
//		}
//		else {
//			x = 3 * x + 1;
//		}
//		cout << x << " ";
//		k++;
//	}
//	cout << endl;
//	cout << "k = " << k << endl;
//	return 0;
//}
