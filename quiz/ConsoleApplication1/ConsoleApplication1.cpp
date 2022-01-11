
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string odpoved1;
	string odpoved2;
	string odpoved3;
	string odpoved4;
	cout << "Prvá otázka ? Vyber si možnosť A b c d" << endl;
	cin >> odpoved1;
	if (odpoved1 == "a")
		cout << "Správne" << endl;
	else {
		cout << "Zle" << endl;
	return 0;
	}


	cout << "Druhá otázka? Vyber si možnosť a B c d" << endl;
		cin >> odpoved2;
		if(odpoved2 == "b")
			cout << "Správne" << endl;
		else {
			cout << "Zle" << endl;
		return 0;
		}

		cout << "Tretia otázka ? Vyber si možnosť a b C d" << endl;
		cin >> odpoved3;
		if (odpoved3== "c")
			cout << "Správne" << endl;
         else {
		cout << "Zle" << endl;
		return 0;
}

		cout << "Štvrtá otázka ? Vyber si možnosť a b c D" << endl;
		cin >> odpoved4;
		if (odpoved4 == "d")
			cout << "Správne" << endl;
		else {
			cout << "Zle" << endl;
		return 0;
 }
	


}
