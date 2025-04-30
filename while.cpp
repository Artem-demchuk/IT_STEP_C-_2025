
#include <iostream>

using namespace std;
int main()
{
    //int number = 1;

    //while (number <= 100) {
    //    cout << number << std::endl;
    //    number++;
    //}






   // int number = 2;
   // int count = 0;

   //cout << "Додатні парні числа, які не перевищують 200:" << endl;

   // while (number <= 200) {
   //     cout << number << endl;
   //     number += 2;
   //     count++;
   // }

   // cout << "Кількість парних чисел: " << count << endl;



    //int N, number, sum = 0;

    //cout << "enter the number of numbers ";
    //cin >> N;

    //int count = 0;
    //while (count < N) {
    //    cout << "enter number ";
    //    cin >> number;

    //    if (number % 2 == 0) {
    //        sum += number;
    //    }
    //    count++;
    //}

    //cout << "cum of even numbers " << sum << endl;


    //const int N = 10;
    //int number, sum = 0;
    //int count = 0;

    //while (count < N) {
    //    cout << "ente number : " << (count + 1) << ": ";
    //    cin >> number;

    //    sum += number;
    //    count++;
    //}

    //double average = static_cast<double>(sum) / N;

    //cout << "cum number : " << sum << endl;
    //cout << "arithmetic mean : " << average << ::endl;





    //int number = 100;

    //do {
    //    cout << number << " ";
    //    number--;
    //} while (number >= 1);

    //cout << endl;




    int sum = 0;
    int number;
    int count = 0;

    do {
        cout << "enter number : " << (count + 1) << ": ";
        cin >> number;
        sum += number;
        count++;
    } while (count < 7);

    cout << "cum numbers :  " << sum << endl;


}
