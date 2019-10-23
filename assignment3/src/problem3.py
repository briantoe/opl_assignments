# global vars
x = 1
y = 2
z = 3


def func1():
    print('in func1')
    print('printing local vars a, b, c')
    print('local vars a, b, c are calculated using global vars x, y, z')
    a = x * 10
    b = y * 10
    c = z * 10
    print(a, b, c, '\n')

    def func2():
        nonlocal a
        print('in func2')
        d = a * 10
        e = b * 10
        f = c * 10
        print('printing local vars d, e, f')
        print('local vars d, e, f are calculated using vars a, b, c from func1()')
        print(d, e, f, '\n')

        def func3():
            g = d * 10
            h = e * 10
            i = f * 10
            print('in func3')
            print('printing local vars g, h, i')
            print('local vars g, h, i are calculated using vars d, e, f from func2()')
            print(g, h, i, '\n')
            global x 
            x = 69
            
            

        func3()
        a = 202

    func2()
    print('in func1()')
    print('printing local var a from func1() after call to func2(), a should have its value set to 202 in func2()')
    print(a)

func1()
print("\nin main()")
print('printing global var x, x should be modified by func3 and set to 69')
print(x)