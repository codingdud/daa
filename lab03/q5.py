import numpy as np

def round_matrix(A):
    n = A.shape[0]
    B = np.zeros(A.shape)
    for i in range(n):
        for j in range(n):
            B[i,j] = min(int(A[i,j]), int(A[j,i]))
    return B
a=np.array([[1,2,3],[1,2,3],[1,2,3]])
print(a)
print(round_matrix(a))
