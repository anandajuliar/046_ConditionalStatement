#include <iostream>
using namespace std;

int main() {
	int nilaiMatematika, nilaiBahasa, nilaiFisika;
	string status;
	float rerata;

	cout << "Nilai Matematika :" << endl;
	cin >> nilaiMatematika;
	cout << "Nilai Bahasa :" << endl;
	cin >> nilaiBahasa;
	cout << "Nilai Fisika :" << endl;
	cin >> nilaiFisika;

	rerata = (nilaiBahasa + nilaiMatematika + nilaiFisika) / 3;

	if (rerata > 60 || nilaiMatematika > 70){
		status = "lulus";
		if (nilaiFisika >= 90) {
			status = "Lulusan Terbaik";
		}
	}
	else
	{
		status = "tidak lulus";
	}
	cout << "Nilai Matematika :" << nilaiMatematika << endl;
	cout << "Nilai Bahasa :" << nilaiBahasa << endl;
	cout << "Nilai Fisika :" << nilaiFisika << endl;
	cout << "status kelulusan :" << status;
}
