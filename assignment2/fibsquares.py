def fib(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    
    return ((fib(n - 1) + fib(n - 2)))

def fib_square(n):
    return fib(n) * fib(n)

def ls_fib_squares(n):
    if n == 1:
        return [fib_square(n)] + [fib_square(n + 1)]
    return ls_fib_squares(n - 1) + [fib_square(n + 1)]

print(ls_fib_squares(10))
# print(list())
# print(fib_squares(4))
# print(fib_squares(7))