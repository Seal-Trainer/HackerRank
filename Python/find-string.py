def count_substring(string, sub_string):
    counter = 0
    increase = len(sub_string)
    index = 0
    end = len(string)

    while index <= end:
        index = string.find(sub_string, index, end)
        if(index != -1):
            index += increase -1
            counter += 1 
        else:
            index += end + 2
    return counter

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)