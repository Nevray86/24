#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<string>
using namespace std;

//������ 2
bool foo(string w) {

	int a = 0;
	int sum = 0;
	for (int i = 0; i < w.size(); i++) {
		w[i] = tolower(w[i]);
	}
	for (int i = w.size() - 1; i >= 0; i--) {
		if (w[a] == w[i]) {
			sum++;
		}
		a++;
	}
	if (sum == w.size())
		return true;
	else
		return false;

}

//������ 3
int sumb(string a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '!' || a[i] == '?' || a[i] == ' ' || a[i] == '.' || a[i] == ',')
			sum++;
	}
	return sum;
}
//������ 4


string func(string s, char q) {
	int A = 0;
	string str4;
	string str5 = "<<==============>>";
	for (int i = s.size(); i >= 0; i--) {
		if (s[i] == q) {
			A = i;
			str4 = s.substr(A);
			break;
		}
		else str4 = str5;
	}return str4;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//������ 1
	string str1 = "Hello world!";
	cout << "������ 1\n" << str1 << endl;
	string sym1;
	string newStr;
	cout << "������� ����� �� �������:";
	cin >> sym1;
	cin.ignore();
	for (int i = 0; i < str1.size(); i++) {
		newStr = str1[i];
		if (newStr == sym1)
			cout << newStr;
	}cout << endl;

	//������ 2 
	cout << "������ 2\n�������� �� ����� �����������:";
	string str;
	getline(cin, str);

	if (foo(str) == true)
		cout << "��� ����� ���������\n";
	else
		cout << "��� ����� �� ���������\n";
	cout << endl;

	//������ 3
	string word;
	cout << "������ 3\n���������� ������ ���������� � �����������!\n";
	getline(cin, word);
	cout << "���������� ������ ���������� = " << sumb(word);
	cout << endl << endl;

	//������ 4
	string str3 = "hello world!";
	cout << "������ 4\n" << str3 << endl << "������� ����� �� �������:";
	char w;
	cin >> w;
	cout << func(str3, w);





	return 0;
}
