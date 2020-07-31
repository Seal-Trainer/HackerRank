if __name__ == '__main__':   
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    average = student_marks.pop(query_name)
    average = sum(average)/len(average)
    print(format(average, '.2f'))