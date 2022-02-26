#include <iostream>

class Polynomial {
public:
    int degree;
    double coeff;
};

double * add(double arr1[], double arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr1[i] += arr2[i];
    }
    return arr1;
}

void print(double arr[], int size)
{
    std::cout << std::endl;
    for (int i = size; i > 0; i--)
    {
        std::cout << arr[i] << "x^" << i << " + ";
    }
    std::cout << arr[0] << std::endl;
}

int main()
{
    int placeholder = 0;

    Polynomial p1;

    std::cout << "Enter the highest degree of the first polynomial: ";
    std::cin >> p1.degree;
    double arr1[p1.degree + 1] = {0};

    std::cout << "\nEnter the coefficient for each degree. \n";
    while (p1.degree >= placeholder)
    {
        std::cout << "Enter the coefficient for the " << p1.degree - placeholder << "th degree: \n";
        std::cin >> p1.coeff;
        arr1[p1.degree - placeholder] = p1.coeff;
        placeholder++;
    }

    placeholder = 0;

    Polynomial p2;

    std::cout << "\nEnter the highest degree of the second polynomial: ";
    std::cin >> p2.degree;
    double arr2[p2.degree + 1] = {0};

    std::cout << "\nEnter the coefficient for each degree. \n";
    while (p2.degree >= placeholder)
    {
        std::cout << "Enter the coefficient for the " << p2.degree - placeholder << "th degree: \n";
        std::cin >> p2.coeff;
        arr2[p2.degree - placeholder] = p2.coeff;
        placeholder++;
    }

    double *ans;
    if(p1.degree > p2.degree)
    {
        ans = add(arr1, arr2, p2.degree + 1);
        print(ans, p1.degree);
    }
    else
    {
        ans = add(arr1, arr2, p1.degree + 1);
        print(ans, p2.degree);
    }
    return 0;
}