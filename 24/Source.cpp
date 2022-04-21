#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<string>
using namespace std;

//Задача 2
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

//Задача 3
int sumb(string a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '!' || a[i] == '?' || a[i] == ' ' || a[i] == '.' || a[i] == ',')
			sum++;
	}
	return sum;
}
//Задача 4


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

	//Задача 1
	string str1 = "Hello world!";
	cout << "Задача 1\n" << str1 << endl;
	string sym1;
	string newStr;
	cout << "Введите букву из надписи:";
	cin >> sym1;
	cin.ignore();
	for (int i = 0; i < str1.size(); i++) {
		newStr = str1[i];
		if (newStr == sym1)
			cout << newStr;
	}cout << endl;

	//Задача 2 
	cout << "Задача 2\nЯвляется ли слово полиндромом:";
	string str;
	getline(cin, str);

	if (foo(str) == true)
		cout << "Это слово полиндром\n";
	else
		cout << "Это слово не полиндром\n";
	cout << endl;

	//Задача 3
	string word;
	cout << "задача 3\nКоличество знаков препинания в предложении!\n";
	getline(cin, word);
	cout << "Количество знаков препинания = " << sumb(word);
	cout << endl << endl;

	//Задача 4
	string str3 = "hello world!";
	cout << "Задача 4\n" << str3 << endl << "Введите букву из надписи:";
	char w;
	cin >> w;
	cout << func(str3, w);





	return 0;
}
