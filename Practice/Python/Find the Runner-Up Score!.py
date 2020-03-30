if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    Max = max(arr)
    while max(arr) == Max:
        arr.remove(max(arr))
    print(max(arr))
