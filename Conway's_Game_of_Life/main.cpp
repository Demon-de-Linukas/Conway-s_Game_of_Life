#include "Variable.h"

void main() {
	LifeGame start;
	int ix = start.ix;
	int iy = start.iy;
	string ans = start.ans;
	start.feldsize();//输入世界大小
	start.where();//输入初始生命位置
	cout << "How many steps should it run?" << endl;
	cin >> start.step;
	start.step = int(start.step);
	//繁衍中...
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

	}//繁衍结束

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