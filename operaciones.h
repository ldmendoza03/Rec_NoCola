#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
T fibonacci(T n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

#endif // OPERACIONES_H