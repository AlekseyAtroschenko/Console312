#include <iostream>

using namespace std;

//задание 1
void show_array(int arr[], const size_t& arr_size)
{
    int* arr_end = arr + arr_size;
    cout << "{ ";
    while (arr != arr_end)
        cout << *arr++ << " ";
    cout << "}\n";
}

//задание 2
//задание 3
void func(int* array_1, int* array_2, int value) 
{
    for (int i(0); i != value; i++) 
    {
        cout << array_1[i] << endl;
        array_2[(value - 1) - i] = array_1[i];
    }
    
    cout << "=================" << endl;
    
    for (int i(0); i != value; i++) 
    {
        cout << array_2[i] << endl;
    }
}

//задание 4
void findMax(int* first, int* second) {

    int Max = *first;
    if (*first < *second) {
        Max = *second;
    }

    cout << "Max =>" << Max << endl;
}

//задание 5
void deerminePosNeg(int* number)
{
    cout << "Our number " << *number;
    if (*number > 0)
    {
        cout << " = positive" << endl;
    }
    else if (*number < 0)
    {
        cout << " = negative" << endl;
    }
    else
    {
        cout << " = zero" << endl;
    }
}

//задание 6
void swap(int* x, int* y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

//задание 7
void summ(int* x, int* y, int* tmp)
{
    *tmp = *x + *y;
}

void razn(int* x, int* y, int* tmp)
{
    *tmp = *x - *y;
}

void proizv(int* x, int* y, int* tmp)
{
    *tmp = *x * *y;
}

void delen(int* x, int* y, int* tmp)
{
    *tmp = *x / *y;
}

void calculateSumArray(int* massiv, int masSize)
{
    int sum = 0;

    for (int i = 0; i < masSize; i++)
    {
        sum += *(massiv + i);
    }
    cout << "Sum of elements = " << sum << endl;
}

void printMassiv(int* massiv, int masSize)
{
    cout << "Massiv: ";
    for (int i = 0; i < masSize; i++)
    {
        cout << *(massiv + i) << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    //задание 1
    //const int size = 10;
    //int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    //int arr2[size] = { 2, 4, 6, 8, 10,  12,  14,  16,  18,  20 };

    //show_array(arr1, size);
    //show_array(arr2, size);

    //int* ptr_arr1 = arr1;
    //int* ptr_arr2 = arr2;
    //int* arr_end = ptr_arr1 + size;
    //for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
    //    *ptr_arr2 = *ptr_arr1;

    //show_array(arr1, size);
    //show_array(arr2, size);

    //system("PAUSE");
    //return 0;

    //задание 2
    //задание 3
    //int value(5);
    //int* array_1, * array_2;

    //array_1 = new int[value];
    //array_2 = new int[value];

    //for (int i(0); i != value; i++) {
    //    array_1[i] = rand() % 10;
    //}

    //func(array_1, array_2, value);

    //задание 4
    //int Number, Number2;
    //cout << "Enter first number for comparing: ->";
    //cin >> Number;
    //cout << "Enter second number for comparing: ->";
    //cin >> Number2;
    //findMax(&Number, &Number2);

    //задание 5
    //int userNumber;
    //cout << "This program defines positive or negative number is entered from the keyboard" << endl <<
    //    "Enter number: ";
    //cin >> userNumber;

    //int* pUserNumber = &userNumber;
    //deerminePosNeg(pUserNumber);

    //задание 6
    //int a = 7, b = 3;
    //cout << a << ' ' << b << '\n';
    //swap(&a, &b);
    //cout << a << ' ' << b << '\n';

    //задание 7
    /*int a, b, res;
    char dei;
    do {
        cout << "Этот примитивный калькулятор использует только указатели\n";
        cout << "\nВозможно использовать только + - * / \n";
        cin >> a >> dei >> b;
        cout << "=\n";
        switch (dei) {
        case '+':
            summ(&a, &b, &res);
            cout << res << "\n";
            break;
        case '-':
            razn(&a, &b, &res);
            cout << res << "\n";
            break;
        case '*':
            proizv(&a, &b, &res);
            cout << res << "\n";
            break;
        case '/':
            delen(&a, &b, &res);
            cout << res << "\n";
            break;
        default:
            cout << "Error!";
        }
        cout << "Если хотите продолжить, нажмите 1:";
        cin >> a;
    } while (a == 1);*/

    //задание 8
    
    int massiv1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int massivDimension = sizeof(massiv1) / sizeof(int);
    cout << "Our program calculates the sum of all elements in the array.." << endl;
    printMassiv(massiv1, massivDimension);
    calculateSumArray(massiv1, massivDimension);

        
}


