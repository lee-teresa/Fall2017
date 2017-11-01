def override(func):
    def incr():
        return func() + 1
    return incr

@override
def one():
    return 1

print(one())