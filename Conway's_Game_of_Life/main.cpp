#include "Variable.h"

void main() {
	LifeGame start;
	int ix = start.ix;
	int iy = start.iy;
	string ans = start.ans;
	start.feldsize();//���������С
	start.where();//�����ʼ����λ��
	cout << "How many steps should it run?" << endl;
	cin >> start.step;
	start.step = int(start.step);
	//������...
	for (int st = 0;st < start.step;st++) {
				start.ctheround();
				for (int px = 0;px < start.width;px++) {
					for (int py = 0;py < start.lang;py++) {
						if (py != (start.width-1)) {
							cout << start.feld[px][py] << "  ";
						}
						else if (py == (start.width-1)) {
							cout << start.feld[px][py] << endl;
						}
					}
				}
				cout << "--------------------------"<<endl;

	}//���ܽ���

	/*for (int px = 0;px <= start.width;px++) {
		for (int py = 0;py <= start.lang;py++) {
			if (py != start.width) {
				cout << start.feld[px][py] << "  ";
			}
			else if (py == start.width) {
				cout << start.feld[px][py] << endl;
			}
		}
	 }*/
	system("pause");

}