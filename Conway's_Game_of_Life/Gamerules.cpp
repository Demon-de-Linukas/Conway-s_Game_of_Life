#include "Variable.h"


int LifeGame::feldsize() {//�����ά�����С
	cout << ("How long is the feld?") <<  endl;
	cin >> lang;
	lang = int(lang);
	cin.clear();
	cin.sync();
	cout << ("How wide is the feld?") <<  endl;
	cin >> width;
	width = int(width);
	cin.clear();
	cin.sync();
	feld = new int *[width];
	for (int i = 0;i < width;i++) {
		feld[i] = new int[lang];
	}
	//��ʼ��
	for (int a = 0;a < width;a++) {
		for (int l = 0;l < lang;l++) {
			feld[a][l] = 0;
		}
	}
	for (int px = 0;px < width;px++) {
		for (int py = 0;py < lang;py++) {
			if (py != (width - 1)) {
				cout << feld[px][py] << "  ";
			}
			else if (py == (width - 1)) {
				cout << feld[px][py] << endl;
			}
		}
	}
	cout << "--------------------------" << endl;
	return **feld, width, lang;
}



int LifeGame::where() {//�����ʼ����λ��(�洢��
bool yyee = true;
wwhere:
	
	while (yyee) {
		cout << ("Which positions has life?") << endl;
		cout << ("Position of x label") << endl;
		cin >> ix;
		ix=int(ix);
		cin.clear();
		cin.sync();
		cout << ("Position of y label") << endl;
		cin >> iy;
		iy=int(iy);
		cin.clear();
		cin.sync();
		feld[ix][iy] = 1;
		//ix = 0;
		//iy = 0;
		cout << ("Finished?") << endl;
		cin >> ans;
		cin.clear();
		cin.sync();
		if (ans == "Yes" || ans == "yes") {
			yyee=false;
		}
		else
		{
			goto wwhere;
		}
	}
	for (int px = 0;px < width;px++) {
		for (int py = 0;py < lang;py++) {
			if (py != (width - 1)) {
				cout << feld[px][py] << "  ";
			}
			else if (py == (width - 1)) {
				cout << feld[px][py] << endl;
			}
		}
	}
	cout << "--------------------------" << endl;
	return  **feld;
}


int LifeGame::countt(int x, int y) {
	count = 0;
	for (posix = -1;posix <= 1;posix++) {
		for (posiy = -1; posiy <= 1;posiy++) {
			if(x+posix>=0 && y+posiy>=0){
				if (x + posix <= (width-1) && y + posiy <= (lang-1)) {
					if (feld[x + posix][y + posiy] == 1) {
						count=count+1;
						//cout << count<<endl;
					}
					else { continue; }
				}
				else { continue; }
			}
			else { continue; }
		}
	}
	if (feld[x][y] == 1) {
		count=count-1;//
	}
	//cout << count << endl;
	return count;
}


int LifeGame::ctheround() {
	for (int i = 0;i < width;i++) {
		for (int m = 0;m < lang;m++) {
			LifeGame::countt(i, m);
			//If the life is alive
			if (feld[i][m] == 1) {
				if (count >= 2 && count <= 3) {
					feld[i][m] = 1;
				}else if (count < 2 || count > 3) {
					feld[i][m] = 0;
				}
				continue;
			}else if (feld[i][m] == 0); {//If the life is dead
				if (count >= 3) {
					feld[i][m] = 1;
					continue;
				}else if (count < 3) {
					feld[i][m] = 0;
					continue;
				}			
			}
		}
	}return **feld;
}



