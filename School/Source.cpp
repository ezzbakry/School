#include <iostream>
#include <string>
using namespace std;
struct student {
	int r;
	string name;
	int age;
	double marks[5];
};
void input(student x[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> x[i].r;
		cin >> x[i].name;
		cin >> x[i].age;
		for (int j = 0; j < 5; j++) {
			cin >> x[i].marks[j];

		}
	}

}
void output(student x[], int n) {
	for (int s = 0; s < n; s++) {
		cout << x[s].r << endl;
		cout << x[s].name << endl;
		cout << x[s].age << endl;
		for (int d = 0; d < 5; d++) {
			cout << x[s].marks[d] << endl;
		}
	};
}
void p14(student x[], int n) {
	for (int b = 0; b < n; b++) {

		if (x[b].age == 14) {
			cout << x[b].name << endl;
		}

	}
}
void even(student x[], int n) {
	for (int t = 0; t < n; t++) {

		if (x[t].r % 2 == 0) {
			cout << x[t].name << endl;
		}
	}



}
void print_det(student x[], int n, int f) {

	for (int o = 0; o < n; o++) {
		if (x[o].r == f) {
			cout << x[o].name << endl;
			cout << x[o].age << endl;

		}

	}


}
void ff(student x[], int n) {
	for (int p = 0; p < 5; p++) {
		int max = 0;
		for (int i = 0; i < n; i++) {
			if (x[i].marks[p] > x[max].marks[p]) {
				max = i;
			}
		}
		cout << x[max].name << endl;
	}
}


int main() {
	student x[15];
	input(x, 2);
	output(x, 2);
	p14(x, 2);
	even(x, 2);
	print_det(x, 2, 6);






}
