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
		int lang, width,ix,iy;
		int posi1, posi2, sumrd,count;
		int **feld;
		int step;
		string ans;
		/*string *xx = new string[];
		string *yy = new string[];*/
		vector <int> xx;
		vector <int> yy;

		int feldsize();
		vector <int> where();
		int countt(int x, int y);
		int ctheround(int x, int y);

	};
#endif /*Variable*/
