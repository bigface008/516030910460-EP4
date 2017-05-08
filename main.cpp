#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;
inline void keep_window_open() { int s; cin >> s; }

int main() {
	cout << "Input an int:";
	int num = 0;
	cin >> num;
	ifstream in;
	string word;
	string suffix;
	vector<string> suffix_list_0;
	vector<string> suffix_list;
	vector<string> list_all;
	vector<int> count;

	map<string, int> suf;
	
	
	
	in.open("C:\\Users\\ariss\\Documents\\Visual Studio 2017\\Projects\\suffix\\EnglishWords.txt");

	while (getline(in, word)) {
		list_all.push_back(word);
		if (word.size() >= num) {
			int len = word.size();
			suffix = word.substr(len - num, num);
			suffix_list_0.push_back(suffix);		
			}
		else {}

		
	}


	in.close();

	cout << "Select a suffix:" << endl;
	string select;
	cin >> select;
	cout << "Input the number of words:" << endl;
	int sum = 0;
	cin >> sum;
	int cal = 0;

	int i = 0;
	bool judge = true;
	while (i < list_all.size() && judge) {
		i++;
		int len = list_all[i].size();
		if (len <= num) {}
		else if (select == list_all[i].substr(len - num, num)) {
			cout << list_all[i] << endl;
			cal++;

			if (cal == sum) {
				judge = false;
			}
		} 
	}


	keep_window_open();
	return 0;
}
