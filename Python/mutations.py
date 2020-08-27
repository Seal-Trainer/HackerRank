def mutate_string(string, position, character):
    cstring = string
    l = list(cstring)
    l[position] = character
    cstring = ''.join(l)
    return cstring

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)