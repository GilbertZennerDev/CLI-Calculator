#include <math.h>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	string t;
	string op;
	double nb1;
	double nb2;
	stringstream ss;
	vector<string> cmds;

	while (1){
		cout << "Enter command:\n";
		getline(cin, t);
		if (t == string("exit")) return (1);
		ss.clear();
		ss.str(t);
		cmds.clear();
		while (getline(ss, t, ' '))
			cmds.push_back(t);
		try{
			nb1 = stod(cmds[0]);
			nb2 = stod(cmds[2]);
			op = cmds[1];
			if (op == string("+")) {cout << nb1 + nb2 << "\n";}
			else if (op == string("-")) {cout << nb1 - nb2 << "\n";}
			else if (op == string("*")) {cout << nb1 * nb2 << "\n";}
			else if (op == string("/")) {cout << nb1 / nb2 << "\n";}
			else if (op == string("**")) {cout << pow(nb1, nb2) << "\n";}
		}
		catch (const exception &e)
		{cout << "Error: Bad Input.\n";}
	}
	return (0);
}
