#include<iostream>
#include<vector>
using namespace std;


int findMissing(int arr[], int size)
{
	vector<int> myvector;
	for (int i=1;i<=size;i++)
	{
		myvector.push_back(i);
	}
	for (int k = 0; k < size; k++)
	{
		auto it = std::find(myvector.begin(), myvector.end(), arr[k]);
		if (it != myvector.end()) {
			myvector.erase(it);
		}
	}
	
	int missing = *myvector.begin();
	return missing;
}

int main()
{
	//int arr[] = { 56, 35, 99, 63, 73, 79, 94, 60, 26, 18, 81, 22, 69, 40, 64, 13, 30, 24, 20, 38, 44, 72, 28, 15, 46, 51, 98, 74, 95, 83, 39, 90, 68, 6, 61, 10, 27, 8, 42, 57, 58, 21, 66, 76, 19, 75, 78, 85, 71, 77, 54, 97, 11, 50, 96, 36, 55, 17, 87, 2, 25, 29, 14, 67, 53, 91, 80, 48, 23, 43, 86, 89, 41, 16, 31, 70, 93, 9, 52, 47, 65, 49, 1, 5, 82, 3, 7, 34, 32, 12, 92, 45, 62 };

	int arr[] = { 1,17,31,45,60,81,2,18,32,46,82,61,94,3,19,33,48,47,62,4,20,83,93,34,80,63,5,16,21,74,35,49,92,84,50,64,85,79,6,22,36,51,65,7,23,95,37,78,52,86,66,8,91,24,38,53,77,67,9,25,39,54,96,68,87,10,26,40,76,55,69,90,11,27,41,100,56,70,12,28,75,42,57,98,71,13,29,88,43,58,72,14,30,97,44,59,73,89,15,75 };
	//int arr[9] = { 10,3,8,4,6,2,7,1,5 };
	int num = findMissing(arr,100);
	cout << num;

	
	

	cout << "\n\n\n";
	return 0;
}
