def solution(arr):
    l=len(arr)-1
    val = [False] * 10
    for i in range(l):
        v = arr[i]
        if(val[v]):
            for j in range(l):
                if(arr[j]==v):
                    arr.remove(v)
                    l-=l
                    j=0
        else:
            val[v]= True 
    return arr

arr = [6,1,6,6,3,3]
solution(arr)
print(arr)