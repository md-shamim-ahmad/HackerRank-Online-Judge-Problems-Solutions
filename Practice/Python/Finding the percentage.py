if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        scores=sum(scores)/3
        student_marks[name] = scores
    query_name = input()    
    print('%.2f' % student_marks[query_name])
