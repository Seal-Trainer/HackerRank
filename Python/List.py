if __name__ == '__main__':
    N = int(input())
    list = []
    for _ in range(N):
        command = input().strip().split(" ")
        if command[0] == "insert":
            list.insert(int(command[1]), int(command[2]))
        elif command[0] == "print":
            print(list)
        elif command[0] == "remove":
            list.remove(int(command[1]))
        elif command[0] == "append":
            list.append(int(command[1]))
        elif command[0] == "sort":
            list.sort()
        elif command[0] == "pop":
            list.pop()
        elif command[0] == "reverse":
            list.reverse()

# Other way to do it
# if __name__ == '__main__':
# N = int(input())
# L = []
# for _ in range(N):
#    command = input().strip().split(" ")
#    if command[0] == "print":
#        print(L)
#    elif len(command) == 3:
#        getattr(L, command[0])(int(command[1]), int(command[2]))
#    elif len(command) == 2:
#        getattr(L, command[0])(int(command[1]))
#    else:
#        getattr(L, command[0])()