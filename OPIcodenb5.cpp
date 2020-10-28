
#include "stdio.h"
#include "windows.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double S, Pi = 3.14, V, r, h = 4;
    printf("Введіть радіус:");
    scanf_s("%lf", &r);
    S = 2 * Pi * r * (r + h);
    S = 2 * Pi * r * h;
    V = Pi * r * r * h;
    printf("Площа  поверхні куба =%lf\n", S);
    printf("Площа бічної поверхні куба =%lf\n", S);
    printf("Об'єм куба =%lf\n", V);
    system("pause");
    return 0;


}