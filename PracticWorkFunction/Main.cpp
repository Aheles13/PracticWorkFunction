#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

// ������ ������� 
template <typename T>
void print_arr(T arr[], const int lenght) {
	std::cout << "[";
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

// ���������� ������� ���������� �������
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}


//������ 1.
template <typename T>
void clear_arr(T arr[], const int length, int num) {
	for (int i = 0; i < length; i++)
		if (num == arr[i])
			arr[i] = 0;

	}

// ������ 2.
	int index_sum(int first[], int second[], int index) {
		return first[index] + second[index];
	}

	// ������ 3.
	/*void mean_arr(double, int size, double min, double max, double)*/

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ������ 1.
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 1, 11);
	std::cout << "����������� ������:";	
	print_arr(arr, size);
		std::cout << "������� ����� -> ";
		std::cin >> n;
	std::cout << "������� ������: ";
		 clear_arr(arr, size, n);
		 print_arr(arr, size);
		 std::cout << std::endl;





	//������ 2
	std::cout << "������ 2.\n������ 1:\n";
	const int size1 = 4;
	int arr1[size1] = { 4, 1, 5, 7 };
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << "\n������ 2:\n";
	const int size2 = 4;
	int arr2[size2] = { 6, 3, 8, 9 };
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << " ";
	int index;
	std::cout << "\n������� ������ -> ";
	std::cin >> index;
	std::cout <<  index_sum(arr1, arr2, index);

	
	// ������ 3.
	/*double arr[]{2, 6, 8, 7, 9, 1, 3, 4, 5, 10};
	double min, max, arefm;
	mean_arr(arr3, 10, double min, max, arefm)*/



	return 0;
}