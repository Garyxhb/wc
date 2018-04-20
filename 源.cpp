#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	ifstream inFile; //Declares a file stream object
	string fileName;
	string pa;
	int count = 0;
	int letters = 0;
	int se = 0;

	cout << "Please enter the file name ";
	getline(cin, fileName);

	inFile.open(fileName.c_str());

	while (!inFile.eof())
	{
		inFile >>pa;
		count++;
	}
	char s[1000000];
	for (int i = 0; i < pa.length(); i++)
	{
		s[i] = pa[i];
		
		if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
		{
			letters++;
		}
		if (s[i] = ' ')
			letters = letters;
		else
		{
			letters = letters;
		}
		if ((s[i] = '.') || (s[i] = '!') || (s[i] = '?'))
			se = se + 1;
		else se = se;
	}
	se = se - letters;
	count = count + se;

	cout << "Number of words in file is " << count << endl;
	cout << "Number of characters in file is " << letters << endl;
	cout << "Number of sentense in file is " << se << endl;
	inFile.close();
	cin.get();
	return 0;
}
