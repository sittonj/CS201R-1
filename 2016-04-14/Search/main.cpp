#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int findDogBreed(string dogBreeds[], const string& searchFor, int listSize, int index);

int main()
{
	string dogBreeds[] = {
        "corgi", "labrador", "bulldog", "beagle", "poodle", "boxer"
        };

    string searchFor;
    cout << "Search for what term? ";
    cin >> searchFor;

	int foundIndex = -1;
	foundIndex = findDogBreed(dogBreeds, searchFor, 6, 0);

    if ( foundIndex == -1 )
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}
	
int findDogBreed(string dogBreeds[], const string& searchFor, int listSize, int index)
{
	if (listSize == 0)
	{
		return -1;
	}
	if (dogBreeds[index] == searchFor)
	{
		return index;
	}

	return findDogBreed(dogBreeds, searchFor, listSize-1, index+1);
}