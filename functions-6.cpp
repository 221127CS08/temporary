//
//  main.cpp
//  loop
//
//  Created by Mukhammadrasul Akramhujaev on 10/10/22.
//

//PROBLEM-1
//#include <iostream>

// using namespace std;

// int sum(int a, int b);

// int main() {
//     int a, b;
//     cout << "input two numbers -> ";
//     cin >> a >> b;
    
//     cout << "the result is " << sum(a, b) << endl;
    
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

//PROBLEM-2

// #include <iostream>

// using namespace std;

// int sum(int a, int b);

// int main() {
//     int a, b;
//     cout << "input two numbers -> ";
//     cin >> a >> b;
    
//     cout << "the product of " << a << " and " << b << " is " << sum(a, b) << endl;
    
//     return 0;
// }

// int sum(int a, int b) {
//     return a * b;
// }

//PROBLEM-3

// #include <iostream>

// using namespace std;

// float area(float radius);
// float circumference(float radius);

// int main() {
//     float radius;
    
//     cout << "radius -> ";
//     cin >> radius;
    
//     cout << "area is " << area(radius) << endl;
//     cout << "circumference is " << circumference(radius) << endl;
    
//     return 0;
// }

// float area(float radius) {
//     return 3.14 * radius * radius;
// }

// float circumference(float radius) {
//     return 2 * 3.14 * radius;
// }

//PROBLEM-4

// #include <cmath>

// bool isEven(int number);

// int main() {

//     int number;

//     cout << "enter a number -> ";
//     cin >> number;
//     cout << (isEven(number) ? "even" : "odd") << endl;


//     return 0;
// }

// bool isEven(int number) {
//     return number % 2 == 0;
// }

//PROBLEM--5

// bool isPrime(int n);

// int main() {
//     int number;

//     cout << "Enter number: ";
//     cin >> number;
//     cout << (isPrime(number) ? "prime" : "not prime") << endl;

//     return 0;
// }

// bool isPrime(int n) {
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

//PROBLEM--6

// int factorial(int n);

// int main() {
    
//     int number;
    
//     cout << "enter number: -> ";
//     cin >> number;
//     cout << factorial(number) << endl;

// return 0;
// }

// int factorial(int n) {
//     double f = 1;
    
//     for (int i = 1; i <= n; i++) {
//         f *= i;
//     }
    
//     return value;
// }

//PROBLEM--7

// void maxMin(int nums[], int size = 3) {
//     int max = 0;
//     int min = nums[0];
    
//     for (int i = 0; i < size; i++) {
//         if (max < nums[i]) {
//             max = nums[i];
//         };
//         if (min > nums[i]) {
//             min = nums[i];
//         };
//     }
    
//     cout << "max is " << max << endl << "min is " << min << endl;
// }


// int main(){
//     int arr[3];
    
//     cout << "enter 3 numbers -> ";
//     cin >> arr[0] >> arr[1] >> arr[2];
//     maxMin(arr);
    
// }
