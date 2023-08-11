def maximize_weakest_crystal_glow(n, k, w, A):
    min_glow = float('inf')

    for i in range(n - w + 1):
        current_sum = sum(A[i:i+w])
        min_glow = min(min_glow, current_sum)

    last_sum = sum(A[n - w:])
    min_glow = min(min_glow, last_sum)

    return min_glow

# Read input values
n = int(input())
k = int(input())
w = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
result = maximize_weakest_crystal_glow(n, k, w, A)
print(result)
