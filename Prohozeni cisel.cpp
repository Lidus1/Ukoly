

#include <iostream>

void prohozeniHodnot(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "Pred prohozenim: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    prohozeniHodnot(&num1, &num2);

    std::cout << "Po prohozeni: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}


