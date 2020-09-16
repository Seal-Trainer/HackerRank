def check(func):
        def inside(a, b):
            if b == 0:
                print("Can't divide by 0")
                return
            func(a, b)
        return inside

@check
def div(a, b):
    return a / by

print(div(10,0))
                    