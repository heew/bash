#include <iostream>
#include <string>
#include <cstring>
#include <md5.h>

using namespace std;

int main(void){
int total=40;
char case_char[]="abcdefghijklmnopqrstuvwxyzæøå0123456789!#%@$=";
string winner;
new_match:
int i = 0;
while ( i < total ) {
	cout << winner << case_char << " (" << i <<"): " << md5("winner + case_char[i]") << endl;
	i++;
}
unsigned int x = 0;
	cout << "Who is leading?" << endl;
	cout << "ref: MetMR3FlFAsfwTUQRSvSK5uIV4pDOLiu" << endl;
	cin >> x;
	cin.ignore(256, '\n');
	winner += case_char[x];
	goto new_match;
	return 0;
}
