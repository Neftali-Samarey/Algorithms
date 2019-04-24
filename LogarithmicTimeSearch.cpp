// Lograrithmic Time 
// 
// Searching a sorted vector for an integer between 0 and n. 
// Neftali Samarey, 2019


#include <iostream>
#include <vector>



using namespace std;


bool searchDirectory(int target, vector<int> list);

int main(int argc, char *argv[]) {
	
	// Setup a vector
	vector<int> myList;

	// Loop from 0 to 1000 and push back every value of i to myList
	for (int i = 0; i < 1000; i++) {
		myList.push_back(i);
	}
	
	// Final verdict, is the number here?
	cout << searchDirectory(798, myList);
}

// Function definition

bool searchDirectory(int target, vector<int> list){
	
	// Check to see if the array is empty first, if it is, exit the function
	if (list.size() == 0) {
		cout << "Array is empty, exiting!" << endl;
 		return false;
	}
	
	// Begin by dividing the entire array by 2
	const int middleIndex = list.size() / 2;
	
	// Based upon the index above, determine which is a close call to then search
	if (target <= list[middleIndex]) {
		cout << "Left side, searching ..." << endl;
		// Now search for the value in this left handside
		for (int index = 0; index <= middleIndex; index++) {
			if (list[index] == target) {
				cout << "Found it, it is " << list[index] << endl;
				return true;
			}
		}
		
	} else {
		cout << "Right side, searching ..." << endl;
		// Now search for the value in this right handside
		
		for (int rightIndex = middleIndex; rightIndex <= list.size(); rightIndex++) {
			if (list[rightIndex] == target) {
				cout << "Found, it is " << list[rightIndex] << endl;
				return true;
			}
		}
	}
	
	return false;
}