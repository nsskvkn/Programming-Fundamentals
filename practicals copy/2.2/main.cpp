// Заівдання 2
#include <iostream>
using namespace std;

int main() {
    int A[3][4] = { {3, 5, 2, 8}, {7, 1, 4, 10}, {9, 0, 6, 11} };

    // Перебір кожної послідовності (рядка)
    for (int i = 0; i < 3; i++) {
        int minValue = A[i][0];
        int sum = 0;

        // Пошук мінімального значення і підрахунок суми елементів
        for (int j = 0; j < 4; j++) {
            sum += A[i][j];
            if (A[i][j] < minValue) {
                minValue = A[i][j];
            }
        }

        // Заміна мінімальних значень на суму
        for (int j = 0; j < 4; j++) {
            if (A[i][j] == minValue) {
                A[i][j] = sum;
            }
        }
    }

    // Вивід оновленого масиву
    cout << "Оновлений масив:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//Завдання 3

#include <iostream>
using namespace std;

int main() {
    int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int B[3] = { 2, 4, 6 };

    // Знаходимо добуток елементів послідовності B
    int productB = 1;
    for (int i = 0; i < 3; i++) {
        productB *= B[i];
    }

    // Заміна елементів A, які є в B, на добуток
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            if (A[i] == B[j]) {
                A[i] = productB;
                break;
            }
        }
    }

    // Вивід оновленої послідовності A
    cout << "Оновлена послідовність A:\n";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

//Завдання 4

#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { {3, 5, 2}, {7, 1, 4}, {9, 0, 6} };

    // Перебір кожного стовпця
    for (int col = 0; col < 3; col++) {
        int maxVal = A[0][col];
        int product = 1;

        // Знаходження максимального значення у стовпці та обчислення добутку
        for (int row = 0; row < 3; row++) {
            product *= A[row][col];
            if (A[row][col] > maxVal) {
                maxVal = A[row][col];
            }
        }

        // Заміна максимального значення на добуток елементів
        for (int row = 0; row < 3; row++) {
            if (A[row][col] == maxVal) {
                A[row][col] = product;
            }
        }
    }

    // Вивід оновленого масиву
    cout << "Оновлений масив:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}