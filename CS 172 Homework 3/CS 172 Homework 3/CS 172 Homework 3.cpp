#include"Fan.h"
#include"QuadraticEquation.h"
#include"EvenNumber.h"
#include<string>

string sort(string&);

using namespace std;

int main()
{
	Fan f1, f2;

	f1.setRadius(10);
	f1.setSpeed(3);
	f1.setOn(1);
	f2.setRadius(5);
	f2.setSpeed(2);

	cout << "Fan 1's radius is " << f1.getRadius() << ", its speed is " << f1.getSpeed() << " and it is " << (f1.getOn( )== 1 ? "on." : "off.") << endl;
	cout << "Fan 2's radius is " << f2.getRadius() << ", its speed is " << f2.getSpeed() << " and it is " << (f2.getOn() == 1 ? "on." : "off.") << endl;

	int n1, n2, n3;
	cout << "Input the coefficients a, b, and c of a quadratic equation ax^2+bx+c=0." << endl<<"a: ";
	cin >> n1;
	cout << endl << "b: ";
	cin >> n2;
	cout << endl << "c: ";
	cin >> n3;

	QuadraticEquation e(n1,n2,n3);

	double discriminant = e.getDiscriminant();
	if (discriminant < 0)
		cout << "The equation has no real roots." << endl<<endl;
	else if (discriminant == 0)
		cout << "Repeated root is " << e.getRoot1() << "." << endl<<endl;
	else
		cout << "Roots are " << e.getRoot1() << " and " << e.getRoot2() << "." << endl<<endl;

	EvenNumber n(16);

	cout << "Even number is 16. The previous even number is " << n.getPrevious() << " and the next even number is " << n.getNext() << "." << endl<<endl;

	string word;
	cout << "Enter a word to be sorted alphabetically." << endl;
	cin >> word;
	string sortedWord = sort(word);
	cout << sortedWord << endl;

	return 0;
}

string sort(string& s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	for (int i = 0; i < s.length(); i++)
	{
		int low = s[i];
		for (int j = i+1; j < s.length(); j++)
		{
			if (s[j] < low)
			{
				low = s[j];
				int temp = s[j];
				s[j] = s[i];
				s[i] = temp;
			}
		}
	}

	return s;
}