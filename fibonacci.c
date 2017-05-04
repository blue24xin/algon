Fibonacci: f(0) = 0, f(1) = 1, f(n) = f(n - 1) + f(n - 2)
int fibo(int n) { // Recursive solution
if (n == 0) {
return 0; // f(0) = 0
} else if (n == 1) {
return 1; // f(1) = 1
} else if (n > 1) {
return fibo(n-1) + fibo(n-2); // f(n) = f(n—1) + f(n-2)
} else {
return –1; // Error condition
}
}
int fibo(int n) { // Iterative solution
if (n == 0) {
return 0;
}
int a = 1
int b = 1;
for (int i = 3; i <= n; i++) {
int c = a + b;
a = b;
b = c;
}
return b;
}

