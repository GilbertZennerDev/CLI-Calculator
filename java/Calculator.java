/*
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
}*/

import java.util.Scanner;

public class Calculator
{
	public Calculator(){};
	public void runCalculator()
	{
		double result;
		double nb1;
		double nb2;
		String op;
		Scanner sc;
		String txt;
		String[] elements;
		
		sc = new Scanner(System.in);
		result = 5;
		while (true)
		{
			System.out.println("Enter command:");
			txt = sc.nextLine();
			if (txt.equals("exit")) return ;
			elements = txt.split("\\s+");
			try{
			nb1 = Double.parseDouble(elements[0]);
			op = elements[1];
			nb2 = Double.parseDouble(elements[2]);
			if (nb2 == 0) nb2 = 0.001;
			}
			catch(Exception e)
			{
				System.out.println(e);
				continue ;
			}
			if (op.equals("+")) result = nb1 + nb2;
			else if (op.equals("-")) result = nb1 - nb2;
			else if (op.equals("*")) result = nb1 * nb2;
			else if (op.equals("/")) result = nb1 / nb2;
			else if (op.equals("**")) result = Math.pow(nb1,nb2);
			else {System.out.println("Bad Operator"); continue;}
			System.out.println(result);
		}
	}
	public static void main(String[] args)
	{
		
		//System.out.println("Calculator working...");
	//	runCalculator();
	}
}
