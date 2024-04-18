#include<iostream>
#include<cstdlib>

using namespace std;

void ShellSort(int list[], int listLength);
void InsertionSort(int list[], int listLength);
void BubbleSort(int list[], int listLength);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int size = 100;
	int arr[size]{};
	int copyarr[size];
	int num;

	for (int i = 0; i < size; i++)//��������� ������� ������ ��� ������������� ����� �� ������������� ����� ������ - �� ����.
	{
		num = rand() % 100 + 1;
		for (int j = 0; j < size; j++)
		{
			if (num == arr[j])
			{
				
			}
			else
			{
				arr[i] = num;
			}
		}
		
	}

	for (int i = 0; i < size; i++)
	{
		copyarr[i] = arr[i];
	}

	ShellSort(copyarr, size);

	for (int i = 0; i < size; i++)
	{
		cout << copyarr[i] << " ";
	}

	cout << "\n\n" << "����� ����� ������������� ��������, ����������� ������ ���� �� �����, � ��������������� ������� ������������� ��, �� ������ ������������ �����\n\n";
	
	for (int i = 0; i < size; i++)
	{
		copyarr[i] = arr[i];
	}
	
	InsertionSort(copyarr, size);

	for (int i = 0; i < size; i++)
	{
		cout << copyarr[i] << " ";
	}

	cout << "\n\n����� ����� ������������� ������...\n\n";

	for (int i = 0; i < size; i++)
	{
		copyarr[i] = arr[i];
	}

	BubbleSort(copyarr, size);

	for (int i = 0; i < size; i++)
	{
		cout << copyarr[i] << " ";
	}

	cout << "\n\n����� ��������� ����� ����������. ����� ����� �������� ��� ��� �� ���� ������������(��������)\n\n";

	
}

void ShellSort(int list[], int listLength)//���������� ����� (� ������� ���� �� ��������� ���������. ������ ���������� ������ ���)
{
	for (int step = listLength / 2; step > 0; step /= 2)
	{
		for (int i = step; i < listLength; i += 1)
		{
			int j = i;
			while (j >= step && list[j - step] > list[i])
			{
				swap(list[j], list[j - step]);
				j -= step;
				
			}
		}
	}
}

void InsertionSort(int list[], int listLength)//���������� ���������
{
	for (int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		while (j >= 0 && list[j] > list[j + 1])
		{
			swap(list[j], list[j + 1]);
			j--;
		}
	}
}

void BubbleSort(int list[], int listLength)//����������� ����������
{
	while (listLength--)
	{
		bool swapped = false;

		for (int i = 0; i < listLength; i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}