#include <stdio.h>
#include <Windows.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int n;

    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    int arr[n];

    printf("Введіть числа: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = lcm_array(arr, n);

    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}
