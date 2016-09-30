#include"Fan.h"
#include"QuadraticEquation.h"
#include"EvenNumber.h"
#include"MyInteger.h"
#include<string>

string sort(string&);

using namespace std;

int main()
{
	// create 2 fans
	Fan f1, f2;

	// set their properties to those specified
	f1.setRadius(10);
	f1.setSpeed(3);
	f1.setOn(1);
	f2.setRadius(5);
	f2.setSpeed(2);

	// display the correct fan properties with the get functions
	cout << "Fan 1's radius is " << f1.getRadius() << ", its speed is " << f1.getSpeed() << " and it is " << (f1.getOn( )== 1 ? "on." : "off.") << endl;
	cout << "Fan 2's radius is " << f2.getRadius() << ", its speed is " << f2.getSpeed() << " and it is " << (f2.getOn() == 1 ? "on." : "off.") << endl;

	// get three coefficients of a quadratic equation from the user and input them to n1, n2, and n3
	int n1, n2, n3;
	cout << "Input the coefficients a, b, and c of a quadratic equation ax^2+bx+c=0." << endl<<"a: ";
	cin >> n1;
	cout << endl << "b: ";
	cin >> n2;
	cout << endl << "c: ";
	cin >> n3;

	// create an object in QuadraticEquation with those 3 numbers
	QuadraticEquation e(n1,n2,n3);

	// assign the variable "discriminant" to its value with the getDiscriminant function
	double discriminant = e.getDiscriminant();

	// if discriminant is negative display that there are no real roots
	if (discriminant < 0)
		cout << "The equation has no real roots." << endl<<endl;

	// if disc. is 0, one root is repeated. Display it
	else if (discriminant == 0)
		cout << "Repeated root is " << e.getRoot1() << "." << endl<<endl;

	// otherwise, display the two roots
	else
		cout << "Roots are " << e.getRoot1() << " and " << e.getRoot2() << "." << endl<<endl;

	// create an even number and set it to 16
	EvenNumber n(16);

	// display the number using the get function, and the next and previous ones using those functions
	cout << "An even number is 16. The previous even number is " << n.getPrevious() << " and the next even number is " << n.getNext() << "." << endl<<endl;

	string word;
	cout << "Enter a word to be sorted alphabetically." << endl;
	// get a word to sort from the user
	cin >> word;

	// sort the word with the sort() function
	string sortedWord = sort(word);
	cout << sortedWord << endl;

	// create an integer and test all of the functions to see if they output the correct analyses
	MyInteger num(24);
	bool even = num.isEven();
	bool odd = num.isOdd();
	bool prime = num.isPrime();

	// print the results
	cout << "The number 24 is " << (even == true ? "" : "not ") << "even, is " << (odd == true ? "" : "not ") << "odd, and is " << (prime == true ? "" : "not ") << "prime." << endl;

	// check a user entry using the int parameter overload
	int entry;
	cout << "Enter an integer to check for even odd or prime characteristics." << endl;
	cin >> entry;
	bool evenEntry = MyInteger::isEven(entry);
	bool oddEntry = MyInteger::isOdd(entry);
	bool primeEntry = MyInteger::isPrime(entry);

	// show the results
	cout<< entry<<" is " << (evenEntry == true ? "" : "not ") << "even, is " << (oddEntry == true ? "" : "not ") << "odd, and is " << (primeEntry == true ? "" : "not ") << "prime." << endl;

	// do a third value assigning it to a new object in the MyInteger class and test it using the MyInteger parameter overload
	cout << "Enter another value for testing" << endl;
	int input;
	cin >> input;
	MyInteger second(input);
	bool evenInteger = MyInteger::isEven(second);
	bool oddInteger = MyInteger::isOdd(second);
	bool primeInteger = MyInteger::isPrime(second);
	
	//display these results
	cout << input <<" is " << (evenInteger == true ? "" : "not ") << "even, is " << (oddInteger == true ? "" : "not ") << "odd, and is " << (primeInteger == true ? "" : "not ") << "prime." << endl;

	// check and display if entry was equal to MyInteger value 24
	bool equivalent = num.equals(entry);

	cout << "Your first entry is " << (equivalent == true ? "" : "not ") << "equal to 24." << endl;

	// Check if first entry value in int form is equal to second entry in MyInteger form
	bool same = num.equals(second, entry);

	cout << "Your second entry is " << (same == true ? "" : "not ") << "equal to your first entry." << endl;

	// convert a user word to an int using the function
	string word2;
	cout << "Enter a word to be converted to an integer." << endl;
	cin >> word2;
	int result = MyInteger::parseInt(word2);

	cout << "Your word in integer form is " << result << "." << endl;

	return 0;
}

// sorting a string alphabetically
string sort(string& s)
{
	// beginning with the first character in the string, and progressing to the end, convert each letter to lowercase
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	// begin with the first letter location in the string. call this "low"
	for (int i = 0; i < s.length(); i++)
	{
		int low = s[i];
		// progress rightward from the point at i, and if you ever encounter a letter which comes before "low", switch spots with the current "low" position
		for (int j = i+1; j < s.length(); j++)
		{
			if (s[j] < low)
			{
				low = s[j];
				s[j] = s[i];
				s[i] = low;
			}
		}
	}
	// as the outer for loop ends, it advances to the next poistion in the string, and checks each rightward value again, thus sorting the string from left to right

	return s;
}