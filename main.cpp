#include"Complex.h"
#include<vector>
#include <queue>   
#include<list>
#include<iterator>

int main() 
{
	setlocale(LC_ALL, "RUS");
	cout << "Имя студента:" << endl;
	vector<string> st;
	string b = "";
	do {
		getline(cin, b);
		if (b.size() > 0) {
			st.push_back(b);
		}
	} while (b != "");
	cout << "Студент:" << endl;
	for (unsigned int i = 0; i < st.size(); i++)
		cout << st[i] << endl;
	list<Comp>comp;
	Comp comp1;
	Comp comp2;
	Comp comp3;
	cin >> comp1;
	cin >> comp2;
	cin >> comp3;
	comp.push_back(comp1);
	comp.push_back(comp2);
	comp.push_back(comp3);
	unsigned int size = 0;
	size = comp.size();
	for (unsigned int i = 0; i < size; i++) {
		cout << comp.front() << endl;
		comp.pop_front();
	}

	queue<string>car;
	cout << "Введите модель машины: ";
	cin.ignore();
	getline(cin, b);
	car.push(b);
	while (!car.empty()) {
		cout << "Последний в очереди " << car.front() << " ";
		car.pop();
	}
	system("pause");
	return 0;
}