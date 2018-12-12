#ifndef Variable
#define Variable

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;
	class LifeGame{
	public:
		int lang, width,ix=-1,iy=-1;
		int posix, posiy, sumrd,count;
		int **feld;
		int step;
		string ans;
		/*string *xx = new string[];
		string *yy = new string[];*/
		vector <int> xx;
		vector <int> yy;

		int feldsize();
		int where();
		int countt(int x, int y);
		int ctheround();

	};
#endif /*Variable*/
