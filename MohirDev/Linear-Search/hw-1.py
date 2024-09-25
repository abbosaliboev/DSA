myList = [1,3,4,6,7,8,10,12,23,45,56,78,99]

def linear_search(n):
    for i in range(len(myList)):
        if myList[i] == n: return -1
    return None

print("index = 7", linear_search(7))