// Task 3.2.cpp : Defines the entry point for the console application.
//
#include "std_lib_facilities.h"

int main()
{
	string Prob = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,";
	Prob.erase(Prob.begin() + 26);
	Prob.erase(Prob.end() - 1);
	string ProbWords[8];
	short counter = 0;
	//sorting step
	{for (short i = 0;i < Prob.length();i++)
	{
		if (Prob[i] == ' ') {
			counter++;
			i++;
		}
		ProbWords[counter] += Prob[i];
	}
	}
	//print step
	{for (short i = 0;i < 8;i++)
		cout << ProbWords[i] << " " << ProbWords[i].size() << endl;
	}
	// Min/Max step
	{istringstream IMin(Prob);
	istringstream IMax(Prob);
	//maximum step
	{string maximum;
	bool Sec = true;
	for (auto max = istream_iterator<string>(IMax);
		max != istream_iterator<string>();
		++max)

		if (Sec) Sec = false, maximum = *max;
		else if ((*max).size() > maximum.size()) maximum = *max;

		cout << "\n" << maximum << " " << maximum.size() << endl;
	}
	//Minimum step
	{	string minimum;
	bool first = true;
	for (auto min = istream_iterator<string>(IMin);
		min != istream_iterator<string>();
		++min)

		if (first) first = false, minimum = *min;
		else if ((*min).size() < minimum.size()) minimum = *min;

		cout << minimum << " " << minimum.size() << endl;
	}

	}
	//lexiographic step - Not Finished. different solutions were tried using ProbWords[8]. But the conversion from string to char were not compliant so would not compile
	{
		string str = "'apple' 'bird' 'sleep'", temp;
					
		for (int i = 0; i < 7; ++i)
			for (int j = i + 1; j < 8; ++j)
			{
				if (str[i] > str[j])
				{
					temp= str[i];
					str[i] = str[j];
					str[j];
				}
				for (int i = 0; i<1; ++i)
				{
					cout << str[i] << endl;

				}
			}
		keep_window_open();
		return 0;
	}
}