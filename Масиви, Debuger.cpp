

#include <iostream>

using namespace std;

int main()
{
    //const int SIZE = 10;
    //int array[SIZE];
    //long long product = 1;

   
    //cout << "enter 10 integers : " << endl;
    //for (int i = 0; i < SIZE; i++) {
    //    cout << "Element " << (i + 1) << ": ";
    //    cin >> array[i];
    //}

   
    //cout << "Entered numbers : ";
    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //    product *= array[i];
    //}

    //cout << endl;

 
    //cout << "Product of array elements : " << product << endl;






    //const int SIZE = 7;
    //int arr[SIZE];
    //int positiveCount = 0, negativeCount = 0;

    //srand(time(0));
   
    //for (int i = 0; i < SIZE; i++) {
    //    arr[i] = rand() % 63 - 12;
    //    if (arr[i] > 0) positiveCount++;
    //    else if (arr[i] < 0) negativeCount++;
    //}

    //cout << "Massif: ";
    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << "\nPositive: " << positiveCount << ", Negative: " << negativeCount << endl;







    //const int SIZE = 7;
    //long array[SIZE] = { 10, 21, 32, 43, 54, 65, 76 };
    //long evenSum = 0;

   
    //cout << "Massif: ";
    //for (int i = 0; i < SIZE; i++) {
    //    cout << array[i] << " ";
    //}
    //cout << endl;

   
    //for (int i = 0; i < SIZE; i++)
    //{
    //    if (array[i] % 2 == 0)
    //    {
    //        evenSum += array[i];
    //    }
    //}

    //
    //cout << "Sum of even elements: " << evenSum << endl;






    //const int SIZE = 30;
    //long array[SIZE];

    //
    //for (int i = 0; i < SIZE; i++) 
    //{
    //    array[i] = 1 << i;
    //}

  
    //cout << "Array elements in direct order : " << endl;
    //for (int i = 0; i < SIZE; i++) 
    //{
    //    cout << array[i] << "\n";
    //}
    //cout << endl;

   
    //cout << "Array elements in reverse order : " << endl;
    //for (int i = SIZE - 1; i >= 0; i--) 
    //{
    //    cout << array[i] << "\n";
    //}
    //cout << endl;








const int SIZE = 10;
int arr[SIZE]{};

cout << "Введіть " << SIZE << " елементів масиву:" << endl;
for (int i = 0; i < SIZE; i++) 
{
    cin >> arr[i];
}

for (int i = 0; i < SIZE; i++)
{
    if (arr[i] < 0) {
        arr[i] = -arr[i];
    }
}

cout << "Масив після заміни від'ємних елементів їх модулями:" << endl;
for (int i = 0; i < SIZE; i++)
{
    cout << arr[i] << " ";
}
cout << endl;





}


