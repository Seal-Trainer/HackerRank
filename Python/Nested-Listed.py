if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        grade = float(input())
        students.append([grade, name])

    students.sort()

    ## Removing lowest grade
    notTheLowestStudents = [i for i in students if i[0] != students[0][0]]

    ## Getting second lowest grade students
    secondLowestStudents = [j for j in notTheLowestStudents if j[0] == notTheLowestStudents[0][0]]

    secondLowestStudents.sort(key = lambda x: x[1])
    for i in range(len(secondLowestStudents)):
        print(secondLowestStudents[i][1])
        


        
    
    
