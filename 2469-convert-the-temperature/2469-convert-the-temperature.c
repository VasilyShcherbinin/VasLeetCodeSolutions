/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#define KELVIN_OFFSET 273.15
#define FAHRENHEIT_FACTOR 1.80
#define FAHRENHEIT_OFFSET 32.00
#define ARRAY_SIZE 2

double* convertTemperature(double celsius, int* returnSize) {
    double *ans = (double*)malloc(ARRAY_SIZE * sizeof(double));
    double kelvin = celsius + KELVIN_OFFSET;
    double fahrenheit = celsius * FAHRENHEIT_FACTOR + FAHRENHEIT_OFFSET;
    ans[0] = kelvin;
    ans[1] = fahrenheit;
    *returnSize = 2;
    return ans;
}