# 2048-0.0.1


#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	char a[4][4];

	for (int j = 0; j < 4; ++j) {
		for (string string; getline(cin, string); ) {
			istringstream stream(string);
			bool failure = false;
			for (int i = 0; i < 4; ++i) {
				if (!(stream >> a[j][i])) {
					failure = true;
					break;
				}
			}

			if (!failure) break;
			else {
				cout << "An error has occured while reading numbers from line" << endl;
			}
		}
	}

	char oper;
	cin >> oper;

	

	switch (oper)

		case 'j': 
			for (int i = 3; i == 1; i--) {
				for (int j = 0; j < 4; j++) {
					switch (i)
						case '3':
							if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 1])) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 1] = '*';

							}
							else if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 2]) && (!isdigit(a[j][i - 1]))) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 2] = '*';

							}
							else if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 3]) && (!isdigit(a[j][i - 1])) && (!isdigit(a[j][i - 2]))) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 3] = '*';

							}

			
			

						case '2':
							if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 1])) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 1] = '*';

							}
							else if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 2]) && (!isdigit(a[j][i - 1]))) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 2] = '*';

							} break;

						case '1':
							if ((isdigit(a[j][i])) && (a[j][i] == a[j][i - 1])) {
								a[j][i] = a[j][i] * 2;
								a[j][i - 1] = '*';

							}break; 
				}
			}

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {

					cout << a[i][j] << " ";
				}
				cout << endl;
			}
	



	cin.get();
	cin.get();
	
    return 0;
}
