#include <iostream>

using namespace std;

int main()
{
	cout << "Calculating average of prime numbers from 1 to a given number." << endl << endl;

	int l;
	cout << "Enter your value: ";
	cin >> l;

	double sum;
	int countPrime;

	for(int x=2; x<=l; x++)
  {
		int y;
		for(y=2; y<x; y++){
			if(x%y == 0){
				break;
				}
		}
		if(y == x){
			sum = sum + x;
			countPrime++;
				}
  }

	cout << "The number of prime numbers available is: " << countPrime << endl << endl;
	cout << "The sum of the numbers is: " << sum << endl << endl;


	double avg;
	avg = sum/countPrime;
	cout << "The mean is calculated as: " << avg << endl;

    return 0;
}
