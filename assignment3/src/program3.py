# global vars
x = 1
y = 2
z = 3

def func1():
    a = x * 10
    b = y * 10
    c = z * 10
    def func2():
        d = a * 10
        e = b * 10
        f = c * 10
        def func3():
            g = d * 10
            h = e * 10
            i = f * 10

            print(g, h, i)
        func3()

    func2()

temp = func1()
